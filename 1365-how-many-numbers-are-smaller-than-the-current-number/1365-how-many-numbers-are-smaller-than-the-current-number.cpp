class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        unordered_map<int,int>mp;
        vector<int>v=nums;
        sort(v.begin(),v.end());
        for(int i=nums.size()-1; i>=0; i--)
        {
            mp[v[i]] = i;
        }
        for(int i=0; i<nums.size(); i++) {
            nums[i] = mp[nums[i]];
        }
        
        return nums;
    }
};
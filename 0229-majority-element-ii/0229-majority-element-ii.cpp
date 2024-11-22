class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        map<int,int>mp;
        for(auto &x:nums)
            mp[x]++;
        int sz=nums.size();
        int r=sz/3;
        vector<int>v;
        for(auto &x:mp)
        {
            if(x.second>r)
                v.push_back(x.first);
        }
        return v;
    }
};
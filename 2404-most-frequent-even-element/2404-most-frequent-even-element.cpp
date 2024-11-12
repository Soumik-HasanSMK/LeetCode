class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        map<int,int>mp;
        for(auto val:nums)
        {
            if(val%2==0)
            {
                mp[val]++;
            }
        }
        int mx=INT_MIN, ans=-1;
        for(auto i:mp)
        {
            if(i.second > mx)
            {
                mx=i.second;
                ans=i.first;
            }
        }
        return ans;
    }
};
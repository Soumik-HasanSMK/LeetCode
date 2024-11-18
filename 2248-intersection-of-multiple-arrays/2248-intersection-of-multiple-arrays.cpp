class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        vector<int>v;
        map<int,int>mp;
        for(auto &f:nums)
        {
            for(auto &k:f)
            {
                mp[k]++;
            }
        }
        for(auto &a:mp)
        {
            if(a.second==nums.size())
                v.push_back(a.first);
        }
        return v;
    }
};
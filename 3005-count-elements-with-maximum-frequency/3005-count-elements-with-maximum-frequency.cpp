class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        map<int,int>mp;
        int cnt=0;
        int mx=INT_MIN;
        for(auto &x:nums)
        {
            mp[x]++;
            if(mp[x]>mx)
                mx=mp[x];
        }
        for(auto &x:nums)
        {
            if(mp[x]==mx)
                cnt++;
        }
        return cnt;
    }
};
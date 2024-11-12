class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        map<int,int>mp;
        for(auto x:nums)
        {
            mp[x]++;
        }
        int sum=0;
        for(auto v: mp)
        {
            if(v.second==1)
                sum+=v.first;
        }
        return sum;
    }
};
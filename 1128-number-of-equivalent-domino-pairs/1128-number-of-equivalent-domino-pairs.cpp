class Solution {
public:
    int numEquivDominoPairs(vector<vector<int>>& dominoes) {
        int ans = 0;
        map<vector<int>, int> mp;
        for (auto& x : dominoes) 
        {
            sort(x.begin(),x.end());
            if(mp.find(x)!=mp.end())
                ans+=mp[x]++;
            else
                mp[x]++;
            
        }
        return ans;
    }
};

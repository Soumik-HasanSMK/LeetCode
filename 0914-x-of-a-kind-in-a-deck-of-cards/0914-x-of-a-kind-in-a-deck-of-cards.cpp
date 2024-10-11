class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) {
        unordered_map<int,int>mp;
        for(int x:deck)
        {
            mp[x]++;
        }
        int ans = 0;
        for(auto it: mp)
            ans = gcd(it.second, ans);
        return (ans>1);
    }
};
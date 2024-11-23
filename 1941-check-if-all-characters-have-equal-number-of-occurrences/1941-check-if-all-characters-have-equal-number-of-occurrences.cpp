class Solution {
public:
    bool areOccurrencesEqual(string s) {
        map<char,int>mp;
        for(char c:s)
            mp[c]++;
        int x=mp[s[0]];
        for(auto [a,b]:mp)
        {
            if(b!=x)
                return false;
        }
        return true;
    }
};
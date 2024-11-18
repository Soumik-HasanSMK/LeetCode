class Solution {
public:
    char repeatedCharacter(string s) {
        map<char,int>mp;
        char ch;
        for(char &c:s)
        {
            mp[c]++;
            if(mp[c]==2)
            {
                ch=c;
                break;
            }
        }
        return ch;
    }
};
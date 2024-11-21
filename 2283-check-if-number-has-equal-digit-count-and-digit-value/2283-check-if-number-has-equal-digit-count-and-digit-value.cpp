class Solution {
public:
    bool digitCount(string num) {
        map<char,int>mp;
        for(char &c:num)
            mp[c]++;
        for(int i=0; i<num.size();i++)
        {
            char c='0'+i;
            if(num[i]!='0'+mp[c])
                return false;
        }
        return true;
    }
};
class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int one=0, zero=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='1')
                one++;
        }
        s[s.length()-1]='1';
        for(int i=0;i<one-1;i++)
        {
            s[i]='1';
        }
        for(int i=one-1;i<s.length()-1;i++)
        {
            s[i]='0';
        }
        return s;
    }
};
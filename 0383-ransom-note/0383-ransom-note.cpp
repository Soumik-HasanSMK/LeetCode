class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        map<char,int>m1, m2;
        for(char c:ransomNote)
            m1[c]++;
        for(char c:magazine)
            m2[c]++;
        for(char c:ransomNote)
        {
            if(m1[c]>m2[c])
                return false;
        }
        return true;
    }
};
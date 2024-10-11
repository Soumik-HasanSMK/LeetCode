class Solution {
public:
    int lengthOfLastWord(string s) {
        reverse(s.begin(),s.end());
        string word;
        stringstream ss(s);
        int l;
        while(ss>>word)
        {
            l=word.length();
            break;
        }
        return l;
    }
};
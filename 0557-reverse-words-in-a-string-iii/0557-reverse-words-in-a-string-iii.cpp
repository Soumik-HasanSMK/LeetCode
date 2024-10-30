class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        string word;
        string str;
        while(ss>>word)
        {
            reverse(word.begin(),word.end());
            if(str.length()>0)
                str+=" ";
            str+=word;
        }
        
        return str;
    }
};
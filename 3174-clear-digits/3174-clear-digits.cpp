class Solution {
public:
    string clearDigits(string s) {
        string str;
        for(char c:s)
        {
            if(isdigit(c))
                str.pop_back();
            else
                str+=c;
        }
        return str;
    }
};
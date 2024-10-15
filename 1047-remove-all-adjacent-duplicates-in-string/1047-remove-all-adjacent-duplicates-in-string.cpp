class Solution {
public:
    string removeDuplicates(string s) {
        string str="";
        for(char c:s)
        {
            if(str.size()!=0 && c==str.back())
                str.pop_back();
            else
                str.push_back(c);
        }
        return str;
    }
};
class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        set<string>s;
        for(auto x:emails)
        {
            string str;
            for(char c:x)
            {
                if(c=='+' || c=='@')
                    break;
                if(c=='.')
                    continue;
                str+=c;
            }
            str+=x.substr(x.find('@'));
            s.insert(str);
        }
        return s.size();
    }
};
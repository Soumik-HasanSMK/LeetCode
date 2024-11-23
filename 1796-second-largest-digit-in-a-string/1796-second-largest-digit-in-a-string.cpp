class Solution {
public:
    int secondHighest(string s) {
        set<int>st;
        for(char c:s)
        {
            if(isdigit(c))
                st.insert(c-'0');
        }
        if(st.size()<2)
            return -1;
        vector<int>v;
        for(auto &x:st)
            v.push_back(x);
        sort(v.rbegin(),v.rend());
        return v[1];
    }
};
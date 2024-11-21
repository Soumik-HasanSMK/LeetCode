class Solution {
public:
    int rearrangeCharacters(string s, string target) {
        sort(s.begin(),s.end());
        sort(target.begin(),target.end());
        map<char,int>m1,m2;
        for(char &x:s)  m1[x]++;
        for(char &x:target)  m2[x]++;
        int mn=INT_MAX, r;
        for(auto c:target)
        {
            r=m1[c]/m2[c];
            if(r<mn)
                mn=r;
        }
        return mn;
    }
};
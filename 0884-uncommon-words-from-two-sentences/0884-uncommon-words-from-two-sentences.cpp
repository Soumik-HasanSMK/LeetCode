class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        stringstream str1(s1), str2(s2);
        string word1, word2;
        vector<string>v;
        
        while(str1>>word1)
        {
            v.push_back(word1);
        }
        while(str2>>word2)
        {
            v.push_back(word2);
        }
        vector<string>ans;
        map<string,int>mp;
        for(auto x:v)
        {
            mp[x]++;
        }
        for(auto x:mp)
        {
            if(x.second==1)
            {
                ans.push_back(x.first);
            }
        }
        return ans;
    }
};
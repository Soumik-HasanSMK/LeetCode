class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string s1="";
        string s2="";
        for(int i=0;i<word1.size();i++)
        {
            for(int j=0;j<word1[i].size();j++)
                s1.push_back(word1[i][j]);
        }
        for(int i=0;i<word2.size();i++)
        {
            for(int j=0;j<word2[i].size();j++)  
                s2.push_back(word2[i][j]);
        }
        if(s1==s2) 
        	return true;
        return false;
    }
};
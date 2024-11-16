class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
        transform(paragraph.begin(),paragraph.end(), paragraph.begin(),::tolower);
        
        for (char& c : paragraph) 
        {
            if (ispunct(c)) 
            {
                c = ' ';
            }
        }
        
        map<string,int>mp;
        stringstream ss(paragraph);
        string word;
        
        while(ss>>word)
        {
            bool smk=false;
            for(auto x:banned)
            {
                if(word==x)
                {   
                    smk=true;
                }
            }
            if(!smk)
                mp[word]++;
        }
        
        int mx=0;
        string str;
        for(auto x:mp)
        {
            if(x.second>mx)
            {
                mx=x.second;
                str=x.first;
            }
        }
        return str;
    }
};
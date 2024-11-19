class Solution {
public:
    int similarPairs(vector<string>& words) {
        for(auto &x:words)
        {
            sort(x.begin(),x.end());
            x.erase(unique(x.begin(),x.end()),x.end());
        }
        int cnt=0;
        for(int i=0; i<words.size()-1; i++)
        {
            for(int j=i+1; j<words.size(); j++)
            {
                if(words[i]==words[j])
                    cnt++;
            }
        }
        return cnt;
    }
};
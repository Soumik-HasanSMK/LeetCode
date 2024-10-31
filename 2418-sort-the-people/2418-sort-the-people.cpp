class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<pair<int,string>>vp;
        for(int i=0;i<heights.size();i++)
        {
            vp.push_back({heights[i],names[i]});
        }
        sort(vp.begin(),vp.end());
        reverse(vp.begin(),vp.end());
        vector<string>s;
        for(int i=0;i<heights.size();i++)
            s.push_back(vp[i].second);
        return s;
    }
};
class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int l=gain.size();
        for(int i=1;i<l;i++)
        {
            gain[i]+=gain[i-1];
        }
        gain.push_back(0);
        sort(gain.begin(),gain.end());
        return gain[gain.size()-1];
    }
};
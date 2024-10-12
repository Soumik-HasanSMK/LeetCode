class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<int> v = score;
        sort(v.begin(), v.end());
        reverse(v.begin(), v.end());
       
        unordered_map<int, int> mp;
        for (int i = 0; i < v.size(); i++) {
            mp[v[i]] = i;
        }

        vector<string> s;
        for (int i = 0; i < score.size(); i++) {

            if (mp[score[i]] == 0)
                s.push_back("Gold Medal");
            else if (mp[score[i]] == 1)
                s.push_back("Silver Medal");
            else if (mp[score[i]] == 2)
                s.push_back("Bronze Medal");
            else
                s.push_back(to_string(mp[score[i]] + 1));
        }
        
        return s;
    }
};

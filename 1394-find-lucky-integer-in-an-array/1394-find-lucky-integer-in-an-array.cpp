class Solution {
public:
    int findLucky(vector<int>& arr) {
        map<int, int> mp;
        for (auto v : arr) {
            mp[v]++;
        }
        int ans = -1; 
        for (auto k : mp) 
        {
            if (k.first == k.second) 
            {
                ans = max(ans, k.first); 
            }
        }
         return ans;
    }
};
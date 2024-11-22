class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int>mp;
        for(auto &x:nums)
            mp[x]++;
        priority_queue<pair<int,int>>pq;
        for(auto [x,y]:mp)
        {
            pq.push({y,x});
        }
        vector<int>v;
        while(k)
        {
            v.push_back(pq.top().second);
            pq.pop();
            k--;
        }
        return v;
    }
};
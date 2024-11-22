class Solution {
public:
    class cmp{
        public:
        bool operator()(pair<int,string>a, pair<int,string>b)
        {
            if(a.first==b.first)
                return a.second>b.second;
            else
                return a.first<b.first;
        }
    };
    
    vector<string> topKFrequent(vector<string>& words, int k) {
        map<string,int>mp;
        for(auto x:words)
            mp[x]++;
        
        priority_queue< pair<int,string>, vector<pair<int,string>>, cmp> pq;
        for(auto [a,b]:mp)
        {
            pq.push({b,a});
        }
        
        vector<string>vs;
        while(k--){
            vs.push_back(pq.top().second);
            pq.pop();
        }
        return vs;
    }
};
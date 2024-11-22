class Solution {
public:
    string frequencySort(string s) {
        map<char,int>mp;
        for(char &c:s)
            mp[c]++;
        priority_queue<pair<int,char>>pq;
        for(auto [a,b]:mp)
        {
            pq.push({b,a});
        }
        string str="";
        while(!pq.empty())
        {
            str+=string(pq.top().first,pq.top().second);
            pq.pop();
        }
        return str;
    }
};
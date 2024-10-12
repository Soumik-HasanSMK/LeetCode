class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        priority_queue<pair<int,int>>pq;
        int i=0;
        for(int x:nums)
        {
            pq.push({x,i});
            i++;
        }
        int mx=pq.top().first;
        int mxInd=pq.top().second;
        pq.pop();
        int mx2=pq.top().first;
        if(mx<mx2*2)
            return -1;
        return mxInd;
    }
};
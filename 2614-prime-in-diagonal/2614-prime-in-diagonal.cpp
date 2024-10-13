class Solution {
public:
    bool isPrime(int n)
    {
        if(n<=1)
            return false;
        for(int i=2;i*i<=n;i++)
        {
            if(n%i==0)
                return false;
        }
        return true;
    }
    
    int diagonalPrime(vector<vector<int>>& nums) {
        int sz=nums.size();
        priority_queue<int>pq;
        for(int i=0; i<sz; i++)
        {
            for(int j=0;j<sz; j++)
            {
                if(i==j || i+j+1==sz)
                    pq.push(nums[i][j]);
            }
        }
        while(!pq.empty())
        {
            int n=pq.top();
            pq.pop();
            if(isPrime(n))
                return n;
        }
        return 0;
    }
};
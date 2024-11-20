class Solution {
public:
    int countBalls(int lowLimit, int highLimit) {
        map<int,int>mp;
        for(int i=lowLimit;i<=highLimit;i++)
        {
            int s=0;
            int n=i;
            while(n!=0)
            {
                s+=(n%10);
                n/=10;
            }
            mp[s]++;
        }
        int mx=INT_MIN;
        for(auto x:mp)
        {
            if(x.second>mx)
                mx=x.second;
        }
        return mx;
    }
};
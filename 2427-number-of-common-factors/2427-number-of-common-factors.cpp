class Solution {
public:
    int commonFactors(int a, int b) {
        int x=gcd(a,b);
        int cnt=0;
        for(int i=1;i<=x;i++)
        {
            if(x%i==0)
                cnt++;
        }
        return cnt;
    }
};
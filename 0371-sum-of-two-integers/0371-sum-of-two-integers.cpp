class Solution {
public:
    int getSum(int a, int b) {
        int cnt=(min(a,b));
        int mx=max(a,b);
        if(mx<0)
        {
            while(mx!=0)
            {
                cnt--;
                mx++;
            }
        }
        else
        {
            while(mx--)
            {
                cnt++;
            }
        }
        return cnt;
    }
};
class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n==0)
            return false;
        long long int sum=0, i;
        for(i=0; sum<n; i++)
        {
            sum=pow(4,i);
        }
        return (sum==n);
    }
};

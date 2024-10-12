class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n==0)
            return false;
        long long int sum=0, i;
        for(i=0; sum<n; i++)
        {
            sum=pow(3,i);
        }
        return (sum==n);
    }
};
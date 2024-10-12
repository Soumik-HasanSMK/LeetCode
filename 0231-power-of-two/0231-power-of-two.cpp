class Solution {
public:
    bool isPowerOfTwo(int n) {
        if (n==0)
            return false;
        long long int i=0, sum=0;
        while(sum<n)
        {
            sum=pow(2,i);
            i++;
        }
        return (sum==n);
    }
};
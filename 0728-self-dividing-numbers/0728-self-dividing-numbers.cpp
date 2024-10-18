class Solution {
public:
    bool isTrue(int n)
    {
        int t=n;
        while(t!=0)
        {
            int r=t%10;
            if(t%10==0 || n%r!=0)
                return false;
            t/=10;
        }
        return true;
    }
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int>v;
        for(int i=left;i<=right;i++)
        {
            if(isTrue(i))
                v.push_back(i);
        }
        return v;
    }
};
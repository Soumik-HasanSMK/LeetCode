class Solution {
public:
    bool checkPerfectNumber(int num) {
        vector<int>v;
        for(int i=1;i<=sqrt(num);i++)
        {
            if(num%i==0)
            {
                v.push_back(i);
                if(num/i!=i)
                    v.push_back(num/i);
            }
        }
        sort(v.begin(),v.end());
        int sum=0;
        for(int i=0;i<v.size()-1;i++)
            sum+=v[i];
        return (sum==num);
    }
};
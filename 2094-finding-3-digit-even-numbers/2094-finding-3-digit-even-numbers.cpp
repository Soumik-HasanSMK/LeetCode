class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        int sum;
        set<int>s;
        for(int i=0;i<digits.size();i++)
        {
            for(int j=0;j<digits.size();j++)
            {
                for(int k=0;k<digits.size();k++)
                {
                    if(i!=j && j!=k && k!=i && digits[i]!=0 && digits[k]%2==0)
                        s.insert(digits[i]*100 + digits[j]*10 + digits[k]);
                }
            }
        }
        digits.clear();
        for(int x:s)
        {
            digits.push_back(x);
        }
        sort(digits.begin(),digits.end());
        return digits;
    }
};
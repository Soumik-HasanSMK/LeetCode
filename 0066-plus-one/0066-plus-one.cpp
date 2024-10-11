class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int sz=digits.size();
        int c=0;
        
        for(int i=sz-1;i>=0;i--)
        {
            int sum=digits[i]+1;
            
            if(sum>9)
            {
                digits[i]=0;
                c=1;
            }
            else
            {
                digits[i]++;
                c=0;
                break;
            }
        }
        
        if(c==1)
            digits.insert(digits.begin(),1);
        return vector<int>(digits.begin(),digits.end());
    }
};
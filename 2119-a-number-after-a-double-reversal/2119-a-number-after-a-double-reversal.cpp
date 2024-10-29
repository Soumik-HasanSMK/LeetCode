class Solution {
public:
    bool isSameAfterReversals(int num) {
        int tmp=num;
        int sum=0;
        while(tmp!=0)
        {
            sum=sum*10+(tmp%10);
            tmp/=10;
        }
        string s1=to_string(num);
        string s2=to_string(sum);
        reverse(s2.begin(),s2.end());
        return (s1==s2);
    }
};
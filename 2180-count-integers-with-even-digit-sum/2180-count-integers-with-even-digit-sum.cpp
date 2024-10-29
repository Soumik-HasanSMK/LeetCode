class Solution {
public:
    int countEven(int num) {
        int cnt=0;
        
        for(int i=2;i<=num;i++)
        {
            int s=0;
            int tmp=i;
            while(tmp!=0)
            {
                s+=tmp%10;
                tmp/=10;
            }
            if(s%2==0)
                cnt++;
        }
        return cnt;
    }
};
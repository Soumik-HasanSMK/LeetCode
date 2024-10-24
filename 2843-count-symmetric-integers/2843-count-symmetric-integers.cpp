class Solution {
public:
    int countSymmetricIntegers(int low, int high) {
        int cnt=0;
        for(int i=low;i<=high;i++)
        {
            string s=to_string(i);
            int a=0, b=0;
            if(s.length()%2==0)
            {
                int l=0, r=s.length()-1;
                while(l<r)
                {
                    a+=int(s[l]);
                    b+=int(s[r]);
                    l++;
                    r--;
                }
                if(a==b)
                    cnt++;
            }
        }
        return cnt;
    }
};
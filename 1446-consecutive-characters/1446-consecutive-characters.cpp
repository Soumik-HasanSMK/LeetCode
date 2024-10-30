class Solution {
public:
    int maxPower(string s) {
        
        int cnt=1;
        int mx=INT_MIN;
        for(int i=0;i<s.length()-1;i++)
        {
            if(s[i]==s[i+1])
            {
                cnt++;
                mx=max(mx,cnt);
            }
            else
                cnt=1;
        }
     return max(cnt,mx);
    }
};
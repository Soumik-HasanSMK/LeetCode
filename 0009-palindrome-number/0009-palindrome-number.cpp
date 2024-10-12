class Solution {
public:
    bool isPalindrome(int x) {
        string s=to_string(x);
        bool ans=true;
        for(int i=0,j=s.length()-1;i<j;i++,j--)
        {
            if(s[i]!=s[j])
            {
                ans=false;
                break;
            }
        }
        return ans;
    }
};
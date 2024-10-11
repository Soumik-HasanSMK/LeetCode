class Solution {
public:
    int countBeautifulPairs(vector<int>& nums) {
        int cnt=0;
        for(int i=0;i<nums.size()-1;i++)
        {
            int a,b;
            while(nums[i]!=0)
            {
                a=nums[i]%10;
                nums[i]/=10;
            }
            for(int j=i+1;j<nums.size();j++)
            {
                b=nums[j]%10;
                if(gcd(a,b)==1)
                    cnt++;
            }
        }
        return cnt;
    }
};
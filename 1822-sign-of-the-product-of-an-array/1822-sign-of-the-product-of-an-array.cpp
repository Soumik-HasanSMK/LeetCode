class Solution {
public:
    int arraySign(vector<int>& nums) {
        long long int sum=1;
        for(int i=0;i<nums.size();i++)
        {
            sum*=nums[i];
            if(sum>0)
                sum=1;
             else if(sum<0)
                 sum=-1;
            else{
                return 0;
            }
        }
        if(sum>0)
            return 1;
        else
            return -1;
            
    }
};
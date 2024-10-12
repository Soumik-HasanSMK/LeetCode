class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        long long int sum=n*(n+1)/2;

        vector<int>v;
        
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]==nums[i+1])
            {
                v.push_back(nums[i]);
                break;
            }             
        }
        nums.erase(unique(nums.begin(),nums.end()),nums.end());
        long long int sum2=0;
        for(int j=0;j<nums.size();j++)
        {
            sum2+=nums[j];
        }
        v.push_back(sum-sum2);
        return v;
    }
};
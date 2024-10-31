class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int sum = 0, total = 0;
        for (auto num : nums) 
            total += num;
        
        for (int i = 0; i < nums.size(); i++) 
        {
            if (sum == total - sum - nums[i])
                return i;
            sum += nums[i];
        }
        
        return -1;
    }
};
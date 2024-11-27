class Solution {
public:
    int missingInteger(vector<int>& nums) 
    {
        int sum = nums[0], i = 1;
        while (i < nums.size() && nums[i - 1] + 1 == nums[i])
            sum += nums[i++];
        sort(begin(nums) + i, end(nums));
        for (i = i - 1; i < nums.size(); ++i)
            if (nums[i] == sum)
        ++sum;
    return sum;
    }
};
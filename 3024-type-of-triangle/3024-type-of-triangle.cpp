class Solution {
public:
    string triangleType(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        set<int>s(nums.begin(),nums.end());
        if(s.size()==1)
            return "equilateral";
        else if(s.size()==2)
        {
            if(nums[0]+nums[1]>nums[2])
                return "isosceles";
            return "none";
        }
        else
        {
            if(nums[0]+nums[1]>nums[2])
                return "scalene";
            return "none";
        }
    }
};
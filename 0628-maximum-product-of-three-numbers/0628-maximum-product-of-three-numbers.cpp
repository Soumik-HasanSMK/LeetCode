class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        reverse(nums.begin(),nums.end());
        long long int p1= (nums[0]*nums[1]*nums[2]);
        long long int p2= (nums[0]*nums[nums.size()-1]*nums[nums.size()-2]);
        return max(p1,p2);
    }
};
class Solution {
public:
    int countElements(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int cnt=0;
        int sz=nums.size();
        int f=nums[0];
        int l=nums[sz-1];
        for(int i=0;i<sz;i++)
        {
            if(nums[i]==f || nums[i]==l)
                cnt++;
        }
        return sz-cnt;
    }
};
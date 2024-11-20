class Solution {
public:
    int mostFrequent(vector<int>& nums, int key) {
        map<int,int>mp;
        int mx=INT_MIN;
        int ans=0;
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]==key)
            {
                mp[nums[i+1]]++;
                if(mp[nums[i+1]]>mx)
                {
                    mx=mp[nums[i+1]];
                    ans=nums[i+1];
                }
            }
        }
        return ans;
    }
};
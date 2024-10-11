class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        set<int>s(nums.begin(), nums.end());
        nums.clear();
        for(int x:s)
            nums.push_back(x);
        
        int sz=s.size();
        
        
        return sz;
    }
};
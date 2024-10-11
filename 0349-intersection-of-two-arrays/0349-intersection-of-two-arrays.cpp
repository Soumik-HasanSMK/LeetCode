class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        
        set<int>s1(nums1.begin(),nums1.end());
        set<int>s2(nums2.begin(),nums2.end());
        set<int>s;
        for(int x:nums1)
        {
            for(int y:nums2)
            {
                if(x==y)
                    s.insert(x);
            }
        }
        return vector<int>(s.begin(), s.end());
    }
};
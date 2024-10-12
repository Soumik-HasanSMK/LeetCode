class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int>vE;
        vector<int>vO;
        for(int x:nums)
        {
            if(x%2==0)
                vE.push_back(x);
            else
                vO.push_back(x);
        }
        vE.insert(vE.end(),vO.begin(),vO.end());
        return vE;
    }
};
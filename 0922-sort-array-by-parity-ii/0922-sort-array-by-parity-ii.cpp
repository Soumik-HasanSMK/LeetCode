class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        queue<int>qE;
        queue<int>qO;
        for(int x:nums)
        {
            if(x%2==0)
                qE.push(x);
            else
                qO.push(x);
        }
        vector<int>v;
        for(int i=0;i<nums.size();i++)
        {
            if(i%2==0)
            {
                v.push_back(qE.front());
                qE.pop();
            }
            else
            {
                v.push_back(qO.front());
                qO.pop();
            }
        }
        return v;
    }
};
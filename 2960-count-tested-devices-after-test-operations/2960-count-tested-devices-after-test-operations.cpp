class Solution {
public:
    int countTestedDevices(vector<int>& batteryPercentages) {
        vector<int>v=batteryPercentages;
        int cnt=0;
        for(int i=0;i<v.size();i++)
        {
            if(v[i]>0)
            {
                cnt++;
                for(int j=i+1;j<v.size();j++)
                {
                    v[j]=max(0,v[j]-1);
                }
            }
            else
                continue;
        }
        return cnt;
    }
};
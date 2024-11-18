class Solution {
public:
    int winningPlayerCount(int n, vector<vector<int>>& pick) {
        int arr[10][11]={0};
        int cnt=0;
        for(auto &x:pick)
        {
            int i=x[0], j=x[1];
            arr[i][j]++;
        }
        for(int i=0; i<10;i++)
        {
            for(int j=0;j<=10;j++)
            {
                if(arr[i][j]>i)
                {
                    cnt++;
                    break;
                }
            }
        }
        return cnt;
    }
};
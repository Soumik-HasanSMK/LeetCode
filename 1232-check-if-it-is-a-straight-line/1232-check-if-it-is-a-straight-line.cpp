class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        set<int>s;
        int dy=coordinates[1][1]-coordinates[0][1];
        int dx=coordinates[1][0]-coordinates[0][0];
        for(int i=1;i<coordinates.size()-1;i++)
        {
            int Y=coordinates[i+1][1]-coordinates[i][1];
            int X=coordinates[i+1][0]-coordinates[i][0];
            if(dx*Y!=dy*X)
                return false;
        }
        return true;
    }
};
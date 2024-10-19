class Solution {
public:
    float length(vector<int>& p1, vector<int>& p2)
    {
        int l=pow((p1[0]-p2[0]),2)+pow((p1[1]-p2[1]),2);
        return l;
    }
    bool validSquare(vector<int>& p1, vector<int>& p2, vector<int>& p3, vector<int>& p4) {
        vector<int>v;
        v.push_back(length(p1,p2));
        v.push_back(length(p1,p3));
        v.push_back(length(p1,p4));
        v.push_back(length(p2,p3));
        v.push_back(length(p2,p4));
        v.push_back(length(p3,p4));
        sort(v.begin(), v.end());
        if(v[0]>0 && v[0]==v[1] && v[1]==v[2] && v[2]==v[3] && v[4]==v[5])
            return true;
        return false;
    }
};
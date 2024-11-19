class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int cnt=0, u=0;
        for(char &x:moves)
        {
            if(x=='L') cnt--;
            if(x=='R') cnt++;
            if(x=='_') u++;
        }
        return u+abs(cnt);
    }
};
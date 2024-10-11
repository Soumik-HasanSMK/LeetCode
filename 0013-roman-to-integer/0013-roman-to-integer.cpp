class Solution {
public:
    int romanToInt(string s) {
        
        vector<int> v;
        for (char c : s) {
            if (c == 'I')
                v.push_back(1);
            else if (c == 'V')
                v.push_back(5);
            else if (c == 'X')
                v.push_back(10);
            else if (c == 'L')
                v.push_back(50);
            else if (c == 'C')
                v.push_back(100);
            else if (c == 'D')
                v.push_back(500);
            else
                v.push_back(1000);
        }

        int r = v.size();
        int sum = 0;

        for (int i = 0; i < r; ) 
        {
            if (i + 1 < r && v[i] < v[i + 1]) 
            {
                sum += v[i + 1] - v[i];
                i += 2;
            } 
            else 
            {
                sum += v[i];
                i++;
            }
        }

        return sum;
    }
};

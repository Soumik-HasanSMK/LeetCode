class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        int sz=image.size();
        for(int i=0;i<sz;i++)
        {
            reverse(image[i].begin(),image[i].end());
            for(int j=0;j<image[i].size();j++)
            {
                image[i][j]=image[i][j]^1;
            }
        }
        return image;
    }
};
class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        for(int i = 0 ;i<image.size();i++){
            reverse(image[i].begin(),image[i].end());
            transform(image[i].begin(),image[i].end(),image[i].begin(),[](int bit) {return 1-bit;});
        }
        return image;
    }
};
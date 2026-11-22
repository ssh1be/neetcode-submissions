class Solution {
public:
    int trap(vector<int>& height) {
        int maxl = 0;
        int maxr = 0;
        vector<int> maxLeft(height.size(), 0);
        vector<int> maxRight(height.size(), 0);
        for (int i = 1; i < height.size(); ++i) {
            if (height[i-1] > maxl){
                maxl = height[i-1];
            }
            maxLeft[i] = maxl;
        }
        for (int j = height.size()-2; j >= 0; --j){
            if (height[j+1] > maxr) {
                maxr = height[j+1];
            }
            maxRight[j] = maxr;
        }
        int water = 0;
        for (int k = 0; k < height.size(); ++k){
            int w = min(maxLeft[k], maxRight[k]) - height[k];
            if (w >= 0){
                water += w;
            }
        }
        return water;
    }
};

class Solution {
public:
    int maxArea(vector<int>& heights) {
        int l = 0;
        int r = heights.size() - 1;
        int max_area = std::numeric_limits<int>::min();
        while (l < r){
            int area = min(heights[l], heights[r]) * (r - l);
            if (area > max_area){
                max_area = area;
            }
            if(heights[l] < heights[r]){
                ++l;
            } else{
                --r;
            }
        }
        return max_area;
    }
};

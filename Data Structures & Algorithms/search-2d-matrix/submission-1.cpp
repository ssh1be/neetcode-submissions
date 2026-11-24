class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int p = 0;
        while (p < matrix.size()){
            int len = matrix[p].size();
            if (matrix[p][len-1] == target){
                return true;
            } else if (matrix[p][len-1] > target){
                break;
            } else {
                ++p;
            }
        }
        if (p >= matrix.size()){
            return false;
        }
        int p2 = matrix[p].size() - 1;
        while (p2 >= 0){
            if (matrix[p][p2] == target){
                return true;
            } else {
                --p2;
            }
        }
        return false;
    }
};

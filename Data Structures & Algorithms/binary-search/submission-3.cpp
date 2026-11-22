class Solution {
public:
    
    int search(vector<int>& nums, int target) {
        int i = nums.size()/2;
        int search_max = nums.size();
        int search_min = 0;
        while(i >= search_min && i < search_max){
            if (nums[i] == target){
                return i;
            } else if (nums[i] > target){
                search_max = i;
                --i;
            } else {
                search_min = i;
                ++i;
            }
        }
        return -1;
    }
};

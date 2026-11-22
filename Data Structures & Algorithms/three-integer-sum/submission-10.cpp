class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int left = 0;
        int mid = left + 1;
        int right = nums.size() - 1;
        vector<vector<int>> ans;
        while(left < right){
            while(mid < right){
                int sum = nums[left] + nums[mid] + nums[right];
                if (sum < 0){
                    ++mid;
                } else if (sum > 0){
                    --right;
                } else { // sum == 0
                    ans.push_back({nums[left], nums[mid], nums[right]});
                    ++mid;
                    while (mid < right && nums[mid] == nums[mid-1]){
                        ++mid;
                    }
                }
            }
            right = nums.size() - 1;
            ++left;
            while (left < right && nums[left] == nums[left - 1]){
                ++left;
            }
            mid = left + 1;
        }
        return ans;
    }
};

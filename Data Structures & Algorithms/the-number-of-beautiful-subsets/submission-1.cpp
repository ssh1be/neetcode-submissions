class Solution {
public:
    int beautifulSubsets(vector<int>& nums, int k) {
        int n = nums.size();
        int count = 0;
        int subset_count = 1 << n;
        for (int mask = 1; mask < subset_count; ++mask) {
            std::vector<int> sub;
            for (int i = 0; i < n; ++i) {
                // Check if the i-th bit is set in the mask
                if (mask & (1 << i)) {
                    sub.push_back(nums[i]);
                }
            }
            bool is_beautiful = true;
            for (int i = 0; i < sub.size(); ++i) {
                for (int j = i + 1; j < sub.size(); ++j) {
                    if (abs(sub[i] - sub[j]) == k) {
                        is_beautiful = false; // Found an invalid pair!
                        break;
                    }
                }
                if (!is_beautiful) {break;}
            }
            if (is_beautiful) {count += 1;}
        }
        return count;
    }
};

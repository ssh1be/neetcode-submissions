class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()) return 0;
        map<int, int> numMap;
        for (int n : nums){
            if(numMap.count(n)){
                numMap[n]++;
            } else{
                numMap.insert({n, 1});
            }
        }
        int maxCount = 0;
        int count = 1;
        for (auto curr = numMap.begin(); curr != numMap.end(); ++curr){
            cout << curr->first << " " << curr->second << endl;
            auto next = std::next(curr);
            if (next != numMap.end() && curr->first + 1 == next->first) {
                count++;
            } else if (count > maxCount) {
                maxCount = count;
                count = 1;
            } else {
                count = 1; 
            }
        }
        return maxCount;
    }
};

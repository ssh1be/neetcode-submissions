class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
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
        for (auto [n, c] : numMap){
            cout << n << " " << c << endl;
            auto next = numMap.upper_bound(n);
            if (next != numMap.end() && n + 1 == next->first){
                count++;
            } else if (count > maxCount){
                maxCount = count;
                count = 1;
            } else {
                count = 1;
            }
        }
        return maxCount;
    }
};

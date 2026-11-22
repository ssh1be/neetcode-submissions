class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
        i = 0
        for n in range(len(nums)):
            i = nums[n]
            c = 0
            for k in range(len(nums)):
                if (i == nums[k]):
                    c+=1
                if (c == 2):
                    return True
        return False
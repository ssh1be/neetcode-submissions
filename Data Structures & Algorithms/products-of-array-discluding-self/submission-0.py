class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        solution = []
        for n in nums:
            ts = list(nums)
            ts.remove(n)
            i = 1
            for t in ts:
                i = i*t
            solution.append(i)
        return solution

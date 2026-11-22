class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        d = {}
        for n in nums:
            if(n in d):
                d[n] += 1
            else:
                d[n] = 1
        sorted_d = dict(sorted(d.items(), key=lambda item: item[1]))
        keys = list(sorted_d.keys())
        return keys[len(keys)-k : len(keys)]
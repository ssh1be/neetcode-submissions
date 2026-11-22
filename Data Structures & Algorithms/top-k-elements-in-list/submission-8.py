class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        sdict = {}
        for n in nums:
            if(n in sdict):
                sdict[n] += 1
            else:
                sdict[n] = 1
        print(sdict)
        sortdict = dict(sorted(sdict.items(), key=lambda item: item[1]))
        print(sortdict)
        keys = list(sortdict.keys())
        return keys[len(keys)-k : len(keys)]
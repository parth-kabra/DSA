from itertools import permutations as pr
class Solution:
    def subsets(self, nums: List[int]) -> List[List[int]]:
        res=[[]]
        for i in nums:
            res+=[curr + [i] for curr in res]
        return res

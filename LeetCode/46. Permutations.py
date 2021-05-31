from itertools import permutations as pr
class Solution:
    def permute(self, nums: List[int]) -> List[List[int]]:
        return list(list(pr(nums)))

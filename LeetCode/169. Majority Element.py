from collections import Counter as ctr
class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        c=ctr(nums)
        return max(c.keys(),key=c.get)

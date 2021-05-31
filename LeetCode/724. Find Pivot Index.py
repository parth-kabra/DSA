class Solution:
    def pivotIndex(self, nums: List[int]) -> int:
        s=sum(nums)
        l=0
        for a,b in enumerate(nums):
            if l==(s-l-b):
                return a
            l+=b
        return -1

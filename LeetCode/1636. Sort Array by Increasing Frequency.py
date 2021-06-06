from collections import Counter as ctr
def count(arr):
    return ctr(arr)
class Solution:
    def frequencySort(self, nums: List[int]) -> List[int]:
        return sorted(sorted(nums)[::-1], key=nums.count)

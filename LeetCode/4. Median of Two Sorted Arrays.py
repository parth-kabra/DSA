from statistics import median
class Solution:
    def findMedianSortedArrays(self, nums1: List[int], nums2: List[int]) -> float:
        for i in nums1:
            nums2.append(i)
        nums1.clear()
        nums2.sort()
        return median(nums2)

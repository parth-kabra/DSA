class Solution:
    def set_intersection(self,set1,set2):
        return [x for x in set1 if x in set2]
    def intersection(self, nums1: List[int], nums2: List[int]) -> List[int]:
        if(len(set(nums1)) < len(set(nums2))):
            return self.set_intersection(set(nums1),set(nums2))
        return self.set_intersection(set(nums2),set(nums1))

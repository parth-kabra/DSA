class Solution:
    def findLength(self, nums1: List[int], nums2: List[int]) -> int:
        s=""
        for i in nums2:
            s+=chr(i)
        mx=""
        res=0
        for i in nums1:
            mx+=chr(i)
            if mx in s:
                res=max(res,len(mx))
            else:
                mx=mx[1:]
        return res;

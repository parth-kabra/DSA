class Solution:
    def moveZeroes(self, nums: List[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        zeros=nums.count(0)
        while(0 in nums):
            nums.remove(0)
        for i in range(zeros):
            nums.append(0)
        

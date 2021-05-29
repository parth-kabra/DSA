class Solution:
    def smallerNumbersThanCurrent(self, nums: List[int]) -> List[int]:
        res=[]
        for i in range(len(nums)):
            n=nums[i]
            ans=0
            for j in nums:
                if(j<n):
                    ans+=1
            res.append(ans)
        return res

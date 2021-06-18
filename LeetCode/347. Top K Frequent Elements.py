class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        res=[]
        mp={}
        for i in nums:
            if not i in mp:
                mp[i]=1
            else:
                mp[i]+=1
        
        for i in range(k):
            mx=max(mp,key=mp.get)
            res.append(mx)
            mp.pop(mx)
        return res;

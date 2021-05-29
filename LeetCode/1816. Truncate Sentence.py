class Solution:
    def truncateSentence(self, s: str, k: int) -> str:
        res=list(s.split(" "))
        ans=""
        for i in range(k):
            ans=ans+" "+res[i]
        return ans[1:]
        

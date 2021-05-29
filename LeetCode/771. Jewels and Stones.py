class Solution:
    def numJewelsInStones(self, jewels: str, stones: str) -> int:
        cnt=0
        for i in stones:
            for j in jewels:
                if i==j:
                    cnt+=1
        return cnt

class Solution:
    def balancedStringSplit(self, s: str) -> int:
        r=0
        l=0
        for i in s:
            if i=="R":
                r+=1
            else:
                r-=1
            if r==0:
                l+=1
        return l

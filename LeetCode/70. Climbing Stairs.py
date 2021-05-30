class Solution:
    def climbStairs(self, n: int) -> int:
        if(n<=2):
            return n
        a=2
        b=1
        c=0
        for i in range(2,n):
            c=a+b
            b=a
            a=c
        return c

class Solution:
    def tribonacci(self, n: int) -> int:
        res=[0,1,1]
        while len(res) < n+1:
            res.append(res[-1]+res[-2]+res[-3])
        return res[n]

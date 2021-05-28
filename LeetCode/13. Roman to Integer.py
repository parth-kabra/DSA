class Solution:
    def romanToInt(self, s: str) -> int:
        value={
            "I":1,
            "V":5,
            "X":10,
            "L":50,
            "C":100,
            "D":500,
            "M":1000
        }
        a=0
        res=0
        n=len(s)
        for i in range(n-1,-1,-1):
            if(value[s[i]]>=a):
                res+=value[s[i]]
            else:
                res-=value[s[i]]
            a=value[s[i]]
        return res

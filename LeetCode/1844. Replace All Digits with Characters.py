class Solution:
    def replaceDigits(self, s: str) -> str:
        res=""
        for (i,j) in enumerate(s):
            if(i%2!=0)and(i!=0):
                p=ord(s[i-1])
                res+=chr(p+int(s[i]))
            else:
                res+=j
        return res

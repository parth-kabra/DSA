class Solution:
    def countSubstrings(self, s: str) -> int:
        c=0
        for i in range(len(s)):
            for j in range(i+1,len(s)+1):
                if(s[i:j]==s[i:j][::-1]):
                    c+=1
        return c

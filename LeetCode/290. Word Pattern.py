class Solution:
    def wordPattern(self, pattern: str, s: str) -> bool:
        s=s.split(" ")
        if(len(s)!=len(pattern)):
            return False;
        
        hash1={}
        hash2={}
        
        for i in range(len(s)):
            if(s[i] in hash1 and hash1[s[i]]!=pattern[i]) or (pattern[i] in hash2 and hash2[pattern[i]]!=s[i]):
                return False
            hash1[s[i]]=pattern[i]
            hash2[pattern[i]]=s[i]
        return True

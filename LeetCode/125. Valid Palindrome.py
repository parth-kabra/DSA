class Solution:
    def isPalindrome(self, s: str) -> bool:
        res=""
        for i in s:
            if(i.islower() or i.isdigit() or i.isupper()):
                res+=i.lower()
        return res==res[::-1]

class Solution:
    def isHappy(self, n: int) -> bool:
        if(n==1 or n==7):
            return True
        if(len(str(n))==1):
            return False
        else:
            return self.isHappy(sum(int(c)**2 for c in str(n)))

def selfD(n):
    for i in str(n):
         if i=="0" or n%int(i)!=0:
                return False
    return True
class Solution:
    def selfDividingNumbers(self, left: int, right: int) -> List[int]:
        res=[]
        for i in range(left,right+1):
            if selfD(i):
                res.append(i)
        return res

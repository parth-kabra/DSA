import math as mt
class Solution:
    def isPowerOfFour(self, n: int) -> bool:
        return n>0 and mt.log(n,4)%1==0

class Solution:
    def kthFactor(self, n: int, k: int) -> int:
        try:
            v=[]
            for i in range(1,n+1):
                if n%i==0:
                    v.append(i)
            return v[k-1]
        except:
            return -1
        

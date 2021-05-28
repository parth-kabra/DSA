class Solution:
    def countPrimes(self, n: int) -> int:
        if n<=2:
            return 0;
        numbers={}
        for i in range(2,int(sqrt(n))+1):
            if i not in numbers:
                for j in range(i*i,n,i):
                    numbers[j]=1
        return n-len(numbers)-2

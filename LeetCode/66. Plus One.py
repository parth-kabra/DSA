class Solution:
    def plusOne(self, a: List[int]) -> List[int]:
        n = len(a)
        res=[]
        a[n-1] += 1
        carry = a[n-1]/10
        a[n-1] = a[n-1] % 10
        for i in range(n-2,-1,-1):
            if (carry == 1):
                a[i] += 1
                carry = a[i]/10
                a[i] = a[i] % 10
        if (carry == 1):
            a.insert(0, 1)
        return a

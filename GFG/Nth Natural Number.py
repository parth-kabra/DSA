"""
https://practice.geeksforgeeks.org/problems/nth-natural-number/1
"""

#User function Template for python3

class Solution:
    def findNth(self,n):
        #code here
        res=0
        a=1
        while n > 0:
            res+=(a*(n%9))
            n=n//9
            a=a*10
        return res

#{ 
#  Driver Code Starts
#Initial Template for Python 3

t=int(input())
for i in range(0,t):
    n=int(input())
    obj=Solution()
    s=obj.findNth(n)
    print(s)
# } Driver Code Ends

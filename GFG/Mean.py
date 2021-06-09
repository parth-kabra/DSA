"""
https://practice.geeksforgeeks.org/problems/mean0021/1/?category[]=Mathematical&category[]=Mathematical&page=1&query=category[]Mathematicalpage1category[]Mathematical#
"""

#User function Template for python3
from statistics import mean
class Solution:
    def mean(self, N , A):
        # code here 
        return int(mean(A))

#{ 
#  Driver Code Starts
#Initial Template for Python 3

#Initial Template for Python 3

if __name__ == '__main__': 
    t = int (input ())
    for _ in range (t):
        N=int(input())
        A = list(map(int,input().split()))
        
        ob = Solution()
        print(ob.mean(N,A))
# } Driver Code Ends

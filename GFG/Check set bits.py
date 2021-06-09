"""
https://practice.geeksforgeeks.org/problems/check-set-bits5408/1/?company[]=Amazon&company[]=Amazon&problemStatus=unsolved&page=1&query=company[]AmazonproblemStatusunsolvedpage1company[]Amazon#
"""


#User function Template for python3
class Solution:
    def isBitSet (self, N):
        # code here 
        res=bin(N).replace("0b","")
        s=set(res)
        if(len(s)==1):
            return 1
        return 0

#{ 
#  Driver Code Starts
#Initial Template for Python 3
if __name__ == '__main__': 
    t = int (input ())
    for _ in range (t):
        N = int(input())
       

        ob = Solution()
        print(ob.isBitSet(N))
# } Driver Code Ends

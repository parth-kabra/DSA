"""
https://practice.geeksforgeeks.org/problems/palindrome-in-both-decimal-and-binary4517/1/?category[]=palindrome&category[]=palindrome&page=1&query=category[]palindromepage1category[]palindrome
"""

#User function Template for python3
class Solution:
    def isDeciBinPalin (self, N):
        # code here
        if bin(N).replace("0b","")[::-1]==bin(N).replace("0b","") and str(N)==str(N)[::-1]:
            return "Yes"
        return "No"

#{ 
#  Driver Code Starts
#Initial Template for Python 3
if __name__ == '__main__': 
    t = int (input ())
    for _ in range (t):
        N = int(input())
        
        ob = Solution()
        print(ob.isDeciBinPalin(N))
# } Driver Code Ends

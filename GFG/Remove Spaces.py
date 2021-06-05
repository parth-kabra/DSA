"""
https://practice.geeksforgeeks.org/problems/remove-spaces0128/1/?category[]=Strings&category[]=Strings&problemStatus=unsolved&page=1&query=category[]StringsproblemStatusunsolvedpage1category[]Strings
"""

#User function Template for python3

class Solution:
    def modify(self, s):
        # code here
        return s.replace(" ","")

#{ 
#  Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        s = input().strip()
        ob = Solution()
        ans = ob.modify(s)
        print(ans)
# } Driver Code Ends

"""
https://practice.geeksforgeeks.org/problems/change-the-string3541/1/?company[]=Oracle&company[]=Oracle&page=1&query=company[]Oraclepage1company[]Oracle
"""

#User function Template for python3


class Solution:
    def modify(self, s):
        # code here
        if s[0].isupper():
            return s.upper()
        return s.lower()

#{ 
#  Driver Code Starts
#Initial Template for Python 3

t = int (input ())
for tc in range (t):
    s = input ()
    ob = Solution()
    print(ob.modify(s))
# } Driver Code Ends

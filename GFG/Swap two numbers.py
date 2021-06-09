"""
https://practice.geeksforgeeks.org/problems/swap-two-numbers3844/1/?category[]=Mathematical&category[]=Mathematical&page=1&query=category[]Mathematicalpage1category[]Mathematical#
"""

#{ 
#Driver Code Starts
#Initial Template for Python 3

 # } Driver Code Ends
#User function Template for python3
class Solution:
    def get(self, a, b):
        #code here
        res=[]
        a,b=b,a
        res.append(a)
        res.append(b)
        return res
#{ 
#Driver Code Starts.
if __name__ == "__main__":
	t = int (input ())
	for tc in range (t):
		a,b = map(int,input().strip().split())
		ob = Solution()
		ans=ob.get(a,b)
		print(str(ans[0])+" "+str(ans[1]))
#} Driver Code Ends

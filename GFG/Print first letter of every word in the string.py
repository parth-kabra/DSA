"""
https://practice.geeksforgeeks.org/problems/print-first-letter-of-every-word-in-the-string3632/1/?company[]=Amazon&company[]=Amazon&problemType=functional&difficulty[]=-1&page=1&sortBy=submissions&query=company[]AmazonproblemTypefunctionaldifficulty[]-1page1sortBysubmissionscompany[]Amazon#
"""

#User function Template for python3
class Solution:
	def firstAlphabet(self, s):
		res=""
		rs=True
		for i in range(len(s)):
		    if(s[i]==" "):
		        rs=True
		    elif (s[i]!=" " and rs==True):
		        res+=s[i]
		        rs=False
		return res
#{ 
#  Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
	T=int(input())
	for i in range(T):
		S = input()
		ob = Solution()
		answer = ob.firstAlphabet(S)
		
		print(answer)


# } Driver Code Ends

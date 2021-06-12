"""
https://practice.geeksforgeeks.org/problems/set-bits0143/1/?company[]=Amazon&company[]=Adobe&company[]=Amazon&company[]=Adobe&problemStatus=unsolved&problemType=functional&difficulty[]=0&page=1&query=company[]Amazoncompany[]AdobeproblemStatusunsolvedproblemTypefunctionaldifficulty[]0company[]Amazoncompany[]Adobepage1
"""

#User function Template for python3
class Solution:
	def setBits(self, N):
		# code here
		return bin(N).count("1")

#{ 
#  Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
	T=int(input())
	for i in range(T):
		N = int(input())
		ob = Solution()
		ans = ob.setBits(N)
		print(ans)




# } Driver Code Ends

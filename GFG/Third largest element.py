"""
https://practice.geeksforgeeks.org/problems/third-largest-element/1/?company[]=Amazon&company[]=Amazon&problemType=functional&difficulty[]=-1&page=1&sortBy=submissions&query=company[]AmazonproblemTypefunctionaldifficulty[]-1page1sortBysubmissionscompany[]Amazon#
"""


class Solution:
    def thirdLargest(self,a, n):
        # code here
        if(len(a)>=3 ):
            maxNum1=max(a)
            while(maxNum1==max(a)):
                a.remove(max(a))
            
            maxNum2=max(a)
            while(maxNum2==max(a)):
                a.remove(max(a))
            return max(a)
        return -1

#{ 
#  Driver Code Starts
# Your code goes here
if __name__=='__main__':
    t = int(input())
    for i in range(t):
        n = int(input())
        arr = list(map(int, input().strip().split()))
        print(Solution().thirdLargest(arr, n))
# } Driver Code Ends

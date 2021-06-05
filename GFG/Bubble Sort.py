"""
https://practice.geeksforgeeks.org/problems/bubble-sort/1/?company[]=Amazon&company[]=Microsoft&company[]=Amazon&company[]=Microsoft&problemStatus=unsolved&problemType=functional&difficulty[]=0&page=1&sortBy=submissions&query=company[]Amazoncompany[]MicrosoftproblemStatusunsolvedproblemTypefunctionaldifficulty[]0page1sortBysubmissionscompany[]Amazoncompany[]Microsoft#
"""

#User function Template for python3

class Solution:

    def bubbleSort(self,arr,n):
        for i in range(n):
            for j in range(0, n-i-1):
                if arr[j] > arr[j+1] :
                    arr[j], arr[j+1] = arr[j+1], arr[j] 

#{ 
#  Driver Code Starts
#Initial Template for Python 3



if __name__=='__main__':
    t = int(input())
    for i in range(t):
        n = int(input())
        arr = list(map(int, input().strip().split()))
        ob = Solution()
        ob.bubbleSort(arr, n)
        for i in arr:
            print(i,end=' ')
        print()

# } Driver Code Ends

"""
https://practice.geeksforgeeks.org/problems/the-problem-of-identical-arrays3229/1/?category[]=Binary%20Search&category[]=Binary%20Search&problemStatus=unsolved&page=1&query=category[]Binary%20SearchproblemStatusunsolvedpage1category[]Binary%20Search#
"""


#User function Template for python3

def check (arr,  brr, n) : 
    #Complete the function
    if sorted(arr)==sorted(brr):
        return 1
    return 0


#{ 
#  Driver Code Starts
#Initial Template for Python 3


for _ in range(0,int(input())):
    
    n = int(input())
    arr = list(map(int,input().strip().split()))
    brr = list(map(int,input().strip().split()))
    
    print(check(arr, brr, n))




# } Driver Code Ends

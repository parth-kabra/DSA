# https://practice.geeksforgeeks.org/problems/search-in-a-rotated-array0959/1/?company[]=Amazon&company[]=Amazon&problemStatus=unsolved&problemType=functional&difficulty[]=0&page=3&query=company[]AmazonproblemStatusunsolvedproblemTypefunctionaldifficulty[]0page3company[]Amazon#
#User function Template for python3

def Search(arr,n,k):
    #code here
    try:
        return arr.index(k)
    except:
        return -1

#{ 
#  Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    tcs=int(input())
    for _ in range(tcs):
        n=int(input())
        arr=[int(x) for x in input().split()]
        k=int(input())

        print(Search(arr,n,k))

# } Driver Code Ends

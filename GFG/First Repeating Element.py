"""
https://practice.geeksforgeeks.org/problems/first-repeating-element4018/1/?company[]=Oracle&company[]=Oracle&page=1&query=company[]Oraclepage1company[]Oracle
"""
#User function Template for python3

class Solution:
    #Function to return the position of the first repeating element.
    def firstRepeated(self,arr, n):
        
        #arr : given array
        #n : size of the array
        for i in range(n):
            if arr.count(arr[i]) > 1:
                return i+1
                break
        return -1
        

#{ 
#  Driver Code Starts
#Initial Template for Python 3

#contributed by RavinderSinghPB
if __name__=='__main__':
    t=int(input())
    for _ in range(t):
        n=int(input())
        
        arr=[int(x) for x in input().strip().split()]
        ob = Solution()
        print(ob.firstRepeated(arr, n))
# } Driver Code Ends

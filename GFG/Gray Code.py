"""
https://practice.geeksforgeeks.org/problems/gray-code-1611215248/1/?category[]=Recursion&category[]=Recursion&page=1&query=category[]Recursionpage1category[]Recursion
"""
#User function Template for python3

class Solution:
    def graycode(self,n):
        #code here
        if (n <= 0):
            return
        arr = list()
        arr.append("0")
        arr.append("1")
        i = 2
        j = 0
        while(True):
            if i >= 1 << n:
                break
            for j in range(i - 1, -1, -1):
                arr.append(arr[j])
            for j in range(i):
                arr[j] = "0" + arr[j]
            for j in range(i, 2 * i):
                arr[j] = "1" + arr[j]
            i = i << 1
        return arr

#{ 
#  Driver Code Starts
#Initial Template for Python 3
import math
def main():
    
    T=int(input())
    
    while(T>0):
        
        
        n=int(input())
        ob=Solution()
        l=ob.graycode(n)
        
        for x in l:
            print(x, end=" ")
            
        print()
     
        T-=1

if __name__=="__main__":
    main()
# } Driver Code Ends

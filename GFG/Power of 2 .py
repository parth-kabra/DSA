"""
https://practice.geeksforgeeks.org/problems/power-of-2-1587115620/1#
"""

#User function Template for python3
from math import log2
class Solution:
    ##Complete this function
    # Function to check if given number n is a power of two.
    def isPowerofTwo(self,n):
        ##Your code here
        return n>0 and log2(n)==int(log2(n))

#{ 
#  Driver Code Starts
#Initial Template for Python 3

import math


def main():
    
    T=int(input())
    
    while(T>0):
        
        
        n=int(input())
        ob=Solution()
        if ob.isPowerofTwo(n):
            print("YES")
        else:
            print("NO")
        
        T-=1

if __name__=="__main__":
    main()
# } Driver Code Ends

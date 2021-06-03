"""
https://practice.geeksforgeeks.org/problems/equilibrium-point-1587115620/1#
"""


# User function Template for python3

class Solution:
    # Complete this function
    
    #Function to find equilibrium point in the array.
    def equilibriumPoint(self,A, N):
        # Your code here
        s=0
        l=0
        for i in range(N):
            s+=A[i]
        for i  in range(N):
            s-=A[i]
            if l==s:
                return i+1
            l+=A[i]
        return -1

#{ 
#  Driver Code Starts
# Initial Template for Python 3

import math


def main():

    T = int(input())

    while(T > 0):

        N = int(input())

        A = [int(x) for x in input().strip().split()]
        ob=Solution()

        print(ob.equilibriumPoint(A, N))

        T -= 1


if __name__ == "__main__":
    main()

# } Driver Code Ends

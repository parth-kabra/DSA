#User function Template for python3

class Solution:

    def isPossible(self, S):

        # code here
        vec=0
        for i in S:
            vec^=1<<ord(i)
        return vec==0 or vec & (vec-1) ==0;

#{ 
#  Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':

    t = int(input())

    for _ in range(t):
        S = input()

        solObj = Solution()

        if solObj.isPossible(S):
            print("Yes")
        else:
            print("No")
# } Driver Code Ends

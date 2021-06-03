"""
https://practice.geeksforgeeks.org/problems/repeated-character2058/1
"""

#User function Template for python3
NO_OF_CHARS=256
def getCharCountArray(string):
    count = [0] * NO_OF_CHARS
    for i in string:
        count[ord(i)]+= 1
    return count
class Solution:
    def firstRep(self, string):
        # code here
        count = getCharCountArray(string)
        index = -1
        k = 0
     
        for i in string:
            if count[ord(i)] > 1:
                index=k
                return string[index]
                break
            k += 1
        return -1

#{ 
#  Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        s = input().strip()
        ob = Solution()
        ans = ob.firstRep(s)
        if ans is '#':
            print(-1)
        else:
            print(ans)
        
# } Driver Code Ends

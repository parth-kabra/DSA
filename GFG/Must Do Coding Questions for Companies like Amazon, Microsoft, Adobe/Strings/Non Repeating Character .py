"""
https://practice.geeksforgeeks.org/problems/non-repeating-character-1587115620/1#
"""


NO_OF_CHARS=256
#User function Template for python3
def getCharCountArray(string):
    count = [0] * NO_OF_CHARS
    for i in string:
        count[ord(i)]+= 1
    return count
class Solution:
    
    #Function to find the first non-repeating character in a string.
    def nonrepeatingCharacter(self,string):
        count = getCharCountArray(string)
        index = -1
        k = 0
     
        for i in string:
            if count[ord(i)] == 1:
                index=k
                return string[index]
                break
            k += 1
        return -1
     
        
    
    

#{ 
#  Driver Code Starts
#Initial Template for Python 3

import atexit
import io
import sys

_INPUT_LINES = sys.stdin.read().splitlines()
input = iter(_INPUT_LINES).__next__
_OUTPUT_BUFFER = io.StringIO()
sys.stdout = _OUTPUT_BUFFER

@atexit.register

def write():
    sys.__stdout__.write(_OUTPUT_BUFFER.getvalue())

if __name__=='__main__':
    t = int(input())
    for i in range(t):
        s=str(input())
        obj = Solution()
        ans=obj.nonrepeatingCharacter(s)
        if(ans!='$'):
            print(ans)
        else:
            print(-1)
            
# } Driver Code Ends

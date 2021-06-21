# https://practice.geeksforgeeks.org/problems/check-if-divisible-by-52730/1/?category[]=Modular%20Arithmetic&category[]=Modular%20Arithmetic&problemStatus=unsolved&page=1&query=category[]Modular%20ArithmeticproblemStatusunsolvedpage1category[]Modular%20Arithmetic#
#User function Template for python3
class Solution:
    def divisibleBy5 (ob,N):
        # code here 
        if int(N)%5==0: return 1
        return 0

#{ 
#  Driver Code Starts
#Initial Template for Python 3
if __name__ == '__main__': 
    t = int (input ())
    for _ in range (t):
        
        N=str(input())
       

        ob = Solution()
        print(ob.divisibleBy5(N))
# } Driver Code Ends

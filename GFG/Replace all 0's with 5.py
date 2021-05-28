"""
https://practice.geeksforgeeks.org/problems/replace-all-0s-with-5/1/?company[]=Amazon&company[]=Amazon&problemType=functional&difficulty[]=-1&page=1&sortBy=submissions&query=company[]AmazonproblemTypefunctionaldifficulty[]-1page1sortBysubmissionscompany[]Amazon
"""



# Function should return an integer value
def convertFive(n):
    # Code here
    return str(n).replace("0","5")

#{ 
#  Driver Code Starts
# Your code goes here
if __name__=='__main__':
    t = int(input())
    for i in range(t):
        print (convertFive(int(input().strip())))
# } Driver Code Ends

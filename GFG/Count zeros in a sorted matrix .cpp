/*
https://practice.geeksforgeeks.org/problems/count-zeros-in-a-sorted-matrix/1#
*/

// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
//Back-end complete function Template for C++

class Solution{
public:
	int countZeros(vector<vector<int>>mat)
	{
		//code here
    	int N=mat.size();
        int row = N - 1, col = 0;
        int count = 0;
        while (col < N)
        {
            while (mat[row][col])
                if (--row < 0)
                    return count;
            count += (row + 1);
            col++;
        }
     
        return count;
	}
};

// { Driver Code Starts.

// Driver program
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<vector<int>>A(n,vector<int>(n,0));
        for(int i=0;i<n;i++){
            for(int j =0;j<n;j++){
                cin>>A[i][j];
            }
        }
        Solution ob;
        cout<<ob.countZeros(A)<<'\n';
    }
    return 0;
}
  // } Driver Code Ends

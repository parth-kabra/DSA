/*
https://practice.geeksforgeeks.org/problems/count-pair-sum5956/1/?category[]=Hash&category[]=Hash&problemStatus=unsolved&problemType=functional&page=1&query=category[]HashproblemStatusunsolvedproblemTypefunctionalpage1category[]Hash
*/

// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution
{
  public:
    int countPairs(int arr1[], int arr2[],  int m, int n, int x) 
    { 
        //code here.
        int res=0;
        unordered_set<int> s;
        for(int i=0;i<m;i++){
            s.insert(arr1[i]);
        }
        for (int i=0;i<n;i++){
            if(s.find(x-arr2[i]) != s.end()) res++;
        }
        return res;
    } 
};

// { Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int m,n;
	    cin>>m>>n;
	    int arr1[m],arr2[n];
	    int x ;
	    for(int i=0;i<m;i++)
	        cin>>arr1[i];
	    for(int j=0;j<n;j++)
	        cin>>arr2[j];
	    cin>>x;
	    Solution ob;
	    cout <<ob.countPairs(arr1, arr2, m, n, x)<<endl;
	}
	return 0;	 
}

  // } Driver Code Ends

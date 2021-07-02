// https://practice.geeksforgeeks.org/problems/k-sorted-array1610/1/?category[]=Binary%20Search&category[]=Binary%20Search&problemStatus=unsolved&problemType=functional&difficulty[]=0&page=1&sortBy=submissions&query=category[]Binary%20SearchproblemStatusunsolvedproblemTypefunctionaldifficulty[]0page1sortBysubmissionscategory[]Binary%20Search#
// { Driver Code Starts


#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution
{

    int bs(int arr[],int low,int high,int x){
        while(low <= high){
            int mid=(low+high)/2;
            if(arr[mid]==x) return mid;
            else if(arr[mid] > x) high=mid-1;
            else low=mid+1;
        }
    }
  public:
    string isKSortedArray(int arr[], int n, int k)
    {
        //code here.
        int dp[n];
        for(int i=0;i<n;i++){
            dp[i]=arr[i];
        }
        sort(dp,dp+n);
        for(int i=0;i<n;i++){
            int x=bs(dp,0,n-1,arr[i]);
            if(abs(i-x) > k) return "No";
        }
        return "Yes";
    }
};

// { Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    cin>>k;
	    Solution ob;
	cout <<ob.isKSortedArray(arr, n, k)<<endl;
	}
	return 0;	 
}  // } Driver Code Ends

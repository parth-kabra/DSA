/*
https://practice.geeksforgeeks.org/problems/smallest-number-repeating-k-times3239/1/?category[]=Hash&category[]=Hash&problemStatus=unsolved&problemType=functional&page=1&query=category[]HashproblemStatusunsolvedproblemTypefunctionalpage1category[]Hash#
*/

// { Driver Code Starts
//Initial Template for C++



#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

#define MAX 1000
class Solution{
    public:
    int findDuplicate(int arr[], int N, int K) 
    { 
        unordered_map<int,int> mp;
        for(int i=0;i<N;i++){
            if(arr[i] < 1 && arr[i] > MAX){
                return -1;
            }
            mp[arr[i]]+=1;
        }
        for(int i=0;i<MAX;i++){
            if(mp[i]==K){
                return i;
            }
        }
        return -1;
    }
};

// { Driver Code Starts.

int main() {
	int t;
	
	cin >> t;
	
	while(t--){
	    int n;
	    cin >> n;
	    int k;
	    cin >> k;
	    int a[n];
	    for(int i = 0;i<n;i++){
	        cin >> a[i];
	    }
	    Solution ob;
	    cout << ob.findDuplicate(a,n,k) << endl;
	    }
	return 0;
}
  // } Driver Code Ends

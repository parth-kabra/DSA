/*
https://practice.geeksforgeeks.org/problems/non-repeating-element3958/1/?category[]=Hash&category[]=Hash&problemStatus=unsolved&problemType=functional&page=1&query=category[]HashproblemStatusunsolvedproblemTypefunctionalpage1category[]Hash#
*/

// { Driver Code Starts
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 

 // } Driver Code Ends

class Solution{
    public:
    int firstNonRepeating(int arr[], int n) 
    { 
        // Complete the function
        int res=0;
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++){
            mp[arr[i]]++;
        }
        for (int i = 0; i < n; i++)
            if (mp[arr[i]] == 1)
                return arr[i];
        return 0;
        
    } 
  
};


// { Driver Code Starts.

int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for (int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        cout<<ob.firstNonRepeating(arr,n)<<endl;
    }
}
  // } Driver Code Ends

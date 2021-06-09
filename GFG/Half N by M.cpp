/*
https://practice.geeksforgeeks.org/problems/geek-and-coffee-shop5721/1/?company[]=Amazon&company[]=Amazon&problemStatus=unsolved&page=1&query=company[]AmazonproblemStatusunsolvedpage1company[]Amazon#
*/

// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int mthHalf(int N, int M){
        // code here
        for(int i=0;i<M-1;i++){
            N/=2;
        }
        return N;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N, M;
        cin>>N>>M;
        
        Solution ob;
        cout<<ob.mthHalf(N, M)<<"\n";
    }
    return 0;
}  // } Driver Code Ends

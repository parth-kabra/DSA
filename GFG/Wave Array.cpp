// https://practice.geeksforgeeks.org/problems/wave-array-1587115621/1/?company[]=Amazon&company[]=Amazon&problemStatus=unsolved&problemType=functional&difficulty[]=0&page=2&sortBy=submissions&query=company[]AmazonproblemStatusunsolvedproblemTypefunctionaldifficulty[]0page2sortBysubmissionscompany[]Amazon#
// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to sort the array into a wave-like array.
    void convertToWave(int *arr, int n){
        
        // Your code here
        sort(arr,arr+n);
        for(int i=0;i<n-1;i+=2){
            std::swap(arr[i],arr[i+1]);
        }
        
    }
};

// { Driver Code Starts.

int main()
{
    int t,n;
    cin>>t; //Input testcases
    while(t--) //While testcases exist
    {
        cin>>n; //input size of array
        int a[n]; //declare array of size n
        for(int i=0;i<n;i++)
            cin>>a[i]; //input elements of array
        Solution ob;
        ob.convertToWave(a, n);

        for(int i=0;i<n;i++)
            cout<<a[i]<<" "; //print array
            
        cout<<endl;
    }
}  // } Driver Code Ends

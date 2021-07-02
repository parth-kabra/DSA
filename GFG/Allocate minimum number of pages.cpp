// https://practice.geeksforgeeks.org/problems/allocate-minimum-number-of-pages0937/1
// { Driver Code Starts
// Initial template for C++

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template in C++

class Solution 
{
    public:
    //Function to find minimum number of pages.
    bool allocate(int arr[],int n,int m,int mid){
        int stu=1;
        int pg=0;
        for(int i=0;i<n;i++){
            if(arr[i] > mid){
                return false;
            }
            if(pg+arr[i] > mid){
                stu++;
                pg=arr[i];
                if(stu > m){
                    return false;
                }
            }
            else{
                pg+=arr[i];
            }
        }
        return true;
    }
    int arrSum(int arr[],int n){
        int res=0;
        for(int i=0;i<n;i++){
            res+=arr[i];
        }
        return res;
    }
    int findPages(int arr[],int n,int m){
        int sum=arrSum(arr,n);
        int low=0;
        int high=sum;
        int res=-1;
        while(low <= high){
            int mid=low+(high-low)/2;
            if(allocate(arr,n,m,mid)){
                res=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return res;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int A[n];
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        int m;
        cin>>m;
        Solution ob;
        cout << ob.findPages(A, n, m) << endl;
    }
    return 0;
}
  // } Driver Code Ends

// https://practice.geeksforgeeks.org/problems/counting-elements-in-two-arrays/1/?category[]=Binary%20Search&category[]=Binary%20Search&company[]=Amazon&company[]=Amazon&problemStatus=unsolved&page=1&query=category[]Binary%20Searchcompany[]AmazonproblemStatusunsolvedpage1company[]Amazoncategory[]Binary%20Search
// { Driver Code Starts
// C++ implementation of For each element in 1st 
// array count elements less than or equal to it
// in 2nd array
#include <bits/stdc++.h>
 
using namespace std;


 // } Driver Code Ends
// function to count for each element in 1st array,
// elements less than or equal to it in 2nd array
class Solution{
  public:
    int binarysearch(int arr[],int low,int high,int x){
        while(low <= high){
            int mid=low+(high-low)/2;
            if(arr[mid] > x){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return high;
    }
    vector<int> countEleLessThanOrEqual(int arr1[], int arr2[], 
                                 int m, int n)
    {
    //Your code goes here
        sort(arr2,arr2+n);
        vector<int> res;
        for(int i=0;i<m;i++){
            int idx=binarysearch(arr2,0,n-1,arr1[i]);
            res.push_back(idx+1);
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
        for(int i=0;i<m;i++)
        cin>>arr1[i];
        for(int j=0;j<n;j++)
        cin>>arr2[j];
        Solution obj;
        vector <int> res = obj.countEleLessThanOrEqual(arr1, arr2, m, n);
        for (int i = 0; i < res.size (); i++) cout << res[i] << " ";
        
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends

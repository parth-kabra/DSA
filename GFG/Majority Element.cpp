/*
https://practice.geeksforgeeks.org/problems/majority-element-1587115620/1/?company[]=Amazon&company[]=Amazon&problemStatus=unsolved&problemType=functional&difficulty[]=0&page=1&sortBy=submissions&query=company[]AmazonproblemStatusunsolvedproblemTypefunctionaldifficulty[]0page1sortBysubmissionscompany[]Amazon
*/

// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
  public:
     // Function to find majority element in the array
    // a: input array
    // size: size of input array
    int majorityElement(int arr[], int n)
    {
        
        // your code here
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++){
            mp[arr[i]]++;
        }
        //int res=0;
        for(auto it : mp){
            if(it.second > n/2){
                return it.first;
            }
        }
        return -1;
    }
};

// { Driver Code Starts.

int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        int arr[n];
        
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        Solution obj;
        cout << obj.majorityElement(arr, n) << endl;
    }

    return 0;
}
  // } Driver Code Ends

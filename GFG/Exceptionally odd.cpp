/*
https://practice.geeksforgeeks.org/problems/find-the-odd-occurence4820/1/?category[]=Hash&category[]=Hash&company[]=Amazon&company[]=Amazon&problemStatus=unsolved&problemType=functional&page=1&sortBy=submissions&query=category[]Hashcompany[]AmazonproblemStatusunsolvedproblemTypefunctionalpage1sortBysubmissionscompany[]Amazoncategory[]Hash
*/

// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{   
public:
    int getOddOccurrence(int arr[], int n) {
        // code here
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++){
            mp[arr[i]]++;
        }
        for(auto it : mp){
            if(it.second % 2 != 0){
                return it.first;
            }
        }
        return -1;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getOddOccurrence(arr, n);
        cout << ans << "\n";
    }
    return 0;
}

  // } Driver Code Ends

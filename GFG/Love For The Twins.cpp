// https://practice.geeksforgeeks.org/problems/love-for-the-twins2623/1/?category[]=Hash&category[]=Hash&problemStatus=unsolved&problemType=functional&page=2&sortBy=submissions&query=category[]HashproblemStatusunsolvedproblemTypefunctionalpage2sortBysubmissionscategory[]Hash#
// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    int getTwinCount(int n , int arr[]) {
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++){
            mp[arr[i]]++;
        }
        int res=0;
        for(auto it : mp){
            if(it.second % 2==0){
                res+=(it.second);
            }
            else{
                res+=it.second-1;
            }
        }
        return res;
    }
}; 

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;
        int Arr[N];
        for(int i=0 ; i<N ; i++)
            cin>>Arr[i];

        Solution ob;
        cout << ob.getTwinCount(N,Arr) << endl;
    }
    return 0;
}  // } Driver Code Ends

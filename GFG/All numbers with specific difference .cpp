// https://practice.geeksforgeeks.org/problems/all-numbers-with-specific-difference3558/1/?category[]=Binary%20Search&category[]=Binary%20Search&problemStatus=unsolved&page=1&query=category[]Binary%20SearchproblemStatusunsolvedpage1category[]Binary%20Search#
// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    long long int sumOfDigit(long long int K)
    {
        long long int sod = 0;
        while (K)
        {
            sod += K % 10;
            K /= 10;
        }
        return sod;
    }
    long long getCount(long long N , long long D) {
        // code here
            if(N <= 2){
                return 0;
            }
            long long int low=0;
            long long int high=N;
            while(low <= high){
                long long int mid=low+(high-low)/2;
                if(mid-sumOfDigit(mid) < D){
                    low=mid+1;
                }
                else{
                    high=mid-1;
                }
            }
            //cout<<high<<endl;
            return (N-high);
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long N,D;

        cin>>N>>D;

        Solution ob;
        cout << ob.getCount(N,D) << endl;
    }
    return 0;
}  // } Driver Code Ends

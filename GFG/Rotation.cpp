// https://practice.geeksforgeeks.org/problems/rotation4723/1#

// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
    int search_rotated_arry(int nums[],int n,int low,int high){
        while(low < high){
            int mid=low+(high-low)/2;
            if(nums[mid] < nums[high]){
                high=mid;
            }
            else{
                low=mid+1;
            }
        }
        return low;
    }
	int findKRotation(int arr[], int n) {
	    // code here
	    int res=search_rotated_arry(arr,n,0,n-1);
	    return res;
	    
	}

};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findKRotation(a, n);
        cout << ans << "\n";
    }
    return 0;
}
  // } Driver Code Ends

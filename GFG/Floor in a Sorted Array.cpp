// https://practice.geeksforgeeks.org/problems/floor-in-a-sorted-array-1587115620/1#
// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
  public:
    // Function to find floor of x
    // n: size of vector
    // x: element whose floor is to find
    int floor_element_array(vector<long long> arr,long long n,long long low,long long high,long long x){
        int res=-1;
        while(low <= high){
            int mid=low+(high-low)/2;
            if(arr[mid] == x){
                return mid;
            }
            if(arr[mid] < x){
                res=max(res,mid);
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return res;
    }
    int findFloor(vector<long long> v, long long n, long long x){
        
        // Your code here
        int res=floor_element_array(v,n,0,n-1,x);
        return res;
    }
};


// { Driver Code Starts.

int main() {
	
	long long t;
	cin >> t;
	
	while(t--){
	    long long n;
	    cin >> n;
	    long long x;
	    cin >> x;
	    
	    vector<long long> v;
	    
	    for(long long i = 0;i<n;i++){
	        long long temp;
	        cin >> temp;
	        v.push_back(temp);
	    }
	    Solution obj;
	    cout << obj.findFloor(v, n, x) << endl;
	   
	}
	
	return 0;
}  // } Driver Code Ends

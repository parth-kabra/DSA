// https://practice.geeksforgeeks.org/problems/array-pair-sum-divisibility-problem3257/1#
// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    bool canPair(vector<int> arr, int k) {
        // Code here.
        unordered_map<int, int> freq;
        int n=arr.size();
        if (n & 1)
            return false;
        
        for (int i = 0; i < n; i++){
            freq[((arr[i] % k) + k) % k]++;
            
        }
        for (int i = 0; i < n; i++) {
            int rem = ((arr[i] % k) + k) % k;
            if (2 * rem == k) {
                if (freq[rem] % 2 != 0)
                    return false;
            }
            else if (rem == 0) {
                if (freq[rem] & 1)
                    return false;
            }
            else if (freq[rem] != freq[k - rem])
                return false;
        }
        return true;
    }
};

// { Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, k;
        cin >> n >> k;
        vector<int> nums(n);
        for (int i = 0; i < nums.size(); i++) cin >> nums[i];
        Solution ob;
        bool ans = ob.canPair(nums, k);
        if (ans)
            cout << "True\n";
        else
            cout << "False\n";
    }
    return 0;
}  // } Driver Code Ends

//  https://practice.geeksforgeeks.org/problems/find-unique-element2632/1/?category[]=Hash&category[]=Hash&problemStatus=unsolved&problemType=functional&page=2&query=category[]HashproblemStatusunsolvedproblemTypefunctionalpage2category[]Hash#
// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



 // } Driver Code Ends

#define MAX 1000
class Solution{
  public:
    int findUnique(int a[], int n, int k) {
        int INT_SIZE = 8 * sizeof(unsigned int);
        int count[INT_SIZE];
        memset(count, 0, sizeof(count));
        for (int i = 0; i < INT_SIZE; i++)
            for (int j = 0; j < n; j++)
                if ((a[j] & (1 << i)) != 0)
                    count[i] += 1;
        unsigned res = 0;
        for (int i = 0; i < INT_SIZE; i++)
            res += (count[i] % k) * (1 << i);
        return res;
    }

};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int a[n], i;
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution obj;
        cout << obj.findUnique(a, n, k) << endl;
    }
}  // } Driver Code Ends

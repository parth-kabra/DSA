// https://practice.geeksforgeeks.org/problems/nearly-sorted-algorithm/0
#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define endl "\n"
const int imax=INT_MAX;
const int imin=INT_MIN;
const int mod=1e9+7;
void solve(){
    int t;cin>>t;
    while(t--){
        int n,k;cin>>n>>k;
        vector<int> arr(n);
        for(int &i : arr){
            cin>>i;
        }
        sort(arr.begin(),arr.end());
        for(int &i : arr){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}

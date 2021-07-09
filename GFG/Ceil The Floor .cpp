//  https://practice.geeksforgeeks.org/problems/ceil-the-floor2802/1#
// { Driver Code Starts

#include <bits/stdc++.h>

using namespace std;

pair<int, int> getFloorAndCeil(int arr[], int n, int x);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        auto ans = getFloorAndCeil(arr, n, x);
        cout << ans.first << " " << ans.second << "\n";
    }
    return 0;
}
// } Driver Code Ends

pair<int,int> result(int arr[],int n,int x){
    int f,c;
    pair<int,int> res;
    int f1=INT_MAX,c1=INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]>=x && c1>(arr[i]-x)){
            c=i;
            c1=arr[i]-x;
        }
        if(arr[i]<=x && f1>(x-arr[i])){
            f=i;
            f1=x-arr[i];
        }
    }
    if(f1==INT_MAX){
        res.first=-1;
    }
    else{
        res.first=arr[f];
    }
    if(c1==INT_MAX){
        res.second=-1;
    }
    else{
        res.second=arr[c];
    }
    return res;
}
pair<int, int> getFloorAndCeil(int arr[], int n, int x) {
    // code here
    pair<int,int> r=result(arr,n,x);
    return r;
}

/*
https://practice.geeksforgeeks.org/problems/second-most-repeated-string-in-a-sequence0534/1/?category[]=Hash&category[]=Hash&company[]=Amazon&company[]=Amazon&problemStatus=unsolved&problemType=functional&page=1&query=category[]Hashcompany[]AmazonproblemStatusunsolvedproblemTypefunctionalpage1company[]Amazoncategory[]Hash#
*/

// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution
{
  public:
    string secFrequent (string arr[], int n)
    {
        //code here.
        unordered_map<string,int> mp;
        for(int i=0;i<n;i++){
            mp[arr[i]]++;
        }
        int MAX=INT_MIN,MAX1=INT_MIN;
        for(auto it : mp){
            if(it.second > MAX){
                MAX1=MAX;
                MAX=it.second;
            }
            else if(it.second > MAX1 && it.second != MAX){
                MAX1=it.second;
            }
        }
        for(auto it : mp) if(it.second == MAX1) return it.first;
        return "";
    }
};

// { Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        Solution ob;
        cout << ob.secFrequent (arr, n) << endl;
    }
}
// Contributed By: Pranay Bansal
  // } Driver Code Ends

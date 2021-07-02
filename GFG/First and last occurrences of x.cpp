// https://practice.geeksforgeeks.org/problems/first-and-last-occurrences-of-x3116/1/?category[]=Binary%20Search&category[]=Binary%20Search&company[]=Amazon&company[]=Amazon&problemStatus=unsolved&problemType=functional&page=1&sortBy=submissions&query=category[]Binary%20Searchcompany[]AmazonproblemStatusunsolvedproblemTypefunctionalpage1sortBysubmissionscompany[]Amazoncategory[]Binary%20Search#
// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
vector<int> find(int a[], int n , int x );

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        ans=find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}


// } Driver Code Ends


vector<int> find(int nums[], int n , int target )
{
    // code here
    vector<int> res;
    int first=-1,last=-1,low=0,high=n-1;
    while(low <= high){
        int mid=low+(high-low)/2;
        if(nums[mid] > target){
            high=mid-1;
        }
        else if(nums[mid] < target){
            low=mid+1;
        }
            
        else{
            first=mid;
            high=mid-1;
        }
    }
        
    int left=0,right=n-1;
    while(left <= right){
        int mid=left+(right-left)/2;
        if(nums[mid] > target){
            right=mid-1;
        }
        else if(nums[mid] < target){
            left=mid+1;
        }
            
        else{
            last=mid;
            left=mid+1;
        }
    }
    res.push_back(first);
    res.push_back(last);
    return res;
}

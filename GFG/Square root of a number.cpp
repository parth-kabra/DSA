/*
https://practice.geeksforgeeks.org/problems/square-root/1/?problemStatus=unsolved&problemType=functional&difficulty[]=1&page=1&query=problemStatusunsolvedproblemTypefunctionaldifficulty[]1page1#
*/

// { Driver Code Starts
//Initial Template for C

#include<stdio.h>
  

 // } Driver Code Ends
//User function Template for C

long long int floorSqrt(long long int x) 
{
    // Your code goes here 
    if(sqrt(x)){
        return sqrt(x);
    }
    return floor(x);
}

// { Driver Code Starts.

int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		long long n;
		scanf("%ld", &n);
	
		printf("%ld\n", floorSqrt(n));
	}
    return 0;   
}
  // } Driver Code Ends

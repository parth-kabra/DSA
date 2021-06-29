// https://practice.geeksforgeeks.org/problems/stock-span-problem-1587115621/1#
// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends




class Solution
{
    public:
    //Function to calculate the span of stockâ€™s price for all n days.
    vector <int> calculateSpan(int price[], int n)
    {
       // Your code here
        stack<int> st;
        vector<int> S(n);
        st.push(0);
        S[0] = 1;
        for (int i = 1; i < n; i++) {
            while (!st.empty() && price[st.top()] <= price[i])
                st.pop();
            S[i] = (st.empty()) ? (i + 1) : (i - st.top());
            st.push(i);
        }
        return S;
    }
};



// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int i,a[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		Solution obj;
		vector <int> s = obj.calculateSpan(a, n);
		
		for(i=0;i<n;i++)
		{
			cout<<s[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
  // } Driver Code Ends

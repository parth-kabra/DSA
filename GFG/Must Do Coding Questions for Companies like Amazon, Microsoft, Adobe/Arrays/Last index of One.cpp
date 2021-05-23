// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

class Solution{
    public:
    int lastIndex(string s) 
    {
        bool f=false;
        for(int i=s.length()-1;i>=0;i--){
            if(s[i]=='1'){
                f=true;
                return i;
                break;
            }
        }
        if(f==false){
            return -1;
        }
    }

};

// { Driver Code Starts.

int main() {
    long long t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.lastIndex(s) << endl;
    }
    return 0;
}  // } Driver Code Ends

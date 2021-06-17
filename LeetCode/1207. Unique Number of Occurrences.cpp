class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> a,b;
        int n=arr.size();
        for(int i=0;i<n;i++){
            a[arr[i]]++;
        }
        for(auto it : a){
            b[it.second]++;
        }
        return a.size()==b.size();
    }
};

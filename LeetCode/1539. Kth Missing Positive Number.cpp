class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        unordered_map<int,int> mp;
        vector<int> res;
        
        int n=arr.size();
        for(int i=0;i<n;i++){
            mp[arr[i]]++;
        }
        int i=0;
        while(res.size() != k){
            i++;
            auto it=mp.find(i);
            if(it==mp.end()){
                res.push_back(i);
            }
        }
        return res[k-1];
    }
};

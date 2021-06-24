class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int,int> mp;
        for(int i : arr){
            mp[i]++;
        }
        int res=-1;
        for(auto it : mp){
            if(it.second == it.first){
                res=max(res,it.first);
            }
        }
        return res;
    }
};

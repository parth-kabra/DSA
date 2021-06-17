class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int res=0;
        int n=nums.size();
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        for(auto it : mp){
            if(it.second==1){
                res+=it.first;
            }
        }
        return res;
    }
};

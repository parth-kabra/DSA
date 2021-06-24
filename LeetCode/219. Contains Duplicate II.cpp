class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        int n=nums.size();
        for(int i=0;i<n;i++){
            int j=nums[i];
            if(mp.count(j) > 0){
                if((i-mp[j]) <= k) return true;
                mp[j]=i;
            }
            mp[j]=i;
        }
        return false;
    }
};

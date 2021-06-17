class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int> mp;
        int res=0;
        for(int i=0;i<n;i++){
            if(mp[nums[i]] > 0){
                res=nums[i];
                break;
            }
            mp[nums[i]]++;
        }
        return res;
    }
};

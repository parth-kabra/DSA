class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int m=0;
        int res=nums[0];
        for(int i=0;i<nums.size();i++){
            m=max(nums[i],m+nums[i]);
            res=max(res,m);
        }
        return res;
    }
};

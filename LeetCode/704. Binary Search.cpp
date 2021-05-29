class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l=0;
        int right=nums.size()-1;
        while(l<=right){
            int p=l+(right - l)/2;
            if(nums[p]==target){
                return p;
            }
            if(target < nums[p]){
                right=p-1;
            }
            else{
                l=p+1;
            }
        }
        return -1;
    }
};

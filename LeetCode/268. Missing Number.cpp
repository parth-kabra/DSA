class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int a,sum=0;
        for(int &a : nums){
            sum=sum+a;
        }
        int ans=(nums.size()* (nums.size() + 1) / 2)-sum;
        return ans;
    }
};

class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int>half1;
        for(int i=0;i<n;i++){
            half1.push_back(nums[i]);
        }
        vector<int> half2;
        for(int i=n;i<2*n;i++){
            half2.push_back(nums[i]);
        }
        vector<int> res;
        for(int i=0;i<n;i++){
            res.push_back(half1[i]);
            res.push_back(half2[i]);
        }
        return res;
    }
};

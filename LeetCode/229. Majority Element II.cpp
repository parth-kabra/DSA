class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int> mp;
        int n=nums.size();
        for(int i : nums){
            mp[i]++;
        }
        vector<int> res;
        for(auto it : mp){
            if(it.second > n/3) res.push_back(it.first);
        }
        return res;
    }
};

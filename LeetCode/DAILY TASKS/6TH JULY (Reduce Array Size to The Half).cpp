class Solution {
public:
    int minSetSize(vector<int>& arr) {
        unordered_map<int,int> mp;
        for(int i : arr){
            mp[i]++;
        }
        vector<int> values;
        for(auto [first,second]  : mp){
            values.push_back(second);
        }
        sort(values.begin(),values.end());
        int res=0;
        int todo=0;
        int high=values.size()-1;
        int half=arr.size()/2;
        
        while(todo < half){
            res++;
            todo+=values[high--];
        }
        return res;
    }
};

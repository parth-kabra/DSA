class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        int n=candyType.size();
        set<int> res;
        for(int i : candyType){
            res.insert(i);
        }
        //return std::min(res.size(), n/2);
        if(res.size() < n/2){
            return res.size();
        }
        return n/2;
    }
};

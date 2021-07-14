class Solution {
public:
    string customSortString(string rank, string s) {
        sort(s.begin(), s.end(), [&](const char& a, const char& b){
            return rank.find(a, 0) < rank.find(b, 0);
        });
        return s;
    }
};

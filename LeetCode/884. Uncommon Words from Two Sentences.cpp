class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        vector<string> res;
        stringstream a(s1),b(s2);
        
        unordered_map<string,int> mp;
        string one,two;
        while(a >> one){
            mp[one]++;
        }
        while(b >> two){
            mp[two]++;
        }
        for(auto it : mp){
            if(it.second == 1){
                res.push_back(it.first);
            }
        }
        return res;
    }
};

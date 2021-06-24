class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int> mmp;
        unordered_map<char,int> rmp;
        for(char i : magazine){
            mmp[i]++;
        }
        for(char i : ransomNote){
            rmp[i]++;
        }
        
        for(auto i : ransomNote){
            if(mmp.find(i)==mmp.end()) return 0;
            else{
                if(mmp[i] < rmp[i])return 0;
            }
        }
        return 1;
    }
};

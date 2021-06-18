class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i=0,n=s.length(),res=0;
        unordered_map<int,int> mp;
        for(int j=0;j<n;j++){
            if(mp.find(s[j]) != mp.end()){
                i=max(i,mp[s[j]]+1);
            }
            mp[s[j]]=j;
            res=max(res,j-i+1);
        }
        return res;
    }
};

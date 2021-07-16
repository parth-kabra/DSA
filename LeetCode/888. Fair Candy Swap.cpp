class Solution {
public:
    vector<int> fairCandySwap(vector<int>& m, vector<int>& n) {
        vector<int> v;
        int x, y;
        int s1 = 0, s2 = 0;
        for(int i = 0; i < m.size(); i++){
            s1 += m[i];
        }
        for(int i = 0; i < n.size(); i++){
            s2 += n[i];
        }
        sort(n.begin(), n.end());
        for(int i = 0; i < m.size(); i++){
            x = m[i];
            y = (s2 - s1)/2 + x;
            int lo = 0, hi = n.size() - 1;
            while(hi - lo > 1){
                int mid = (hi + lo) / 2;
                if(n[mid] > y)
                    hi = mid - 1;
                else
                    lo = mid;
            }
            if(n[lo] == y){
                y = n[lo];
                v.push_back(x);
                v.push_back(y);
                break;
            }
            else if(n[hi] == y){
                y = n[hi];
                v.push_back(x);
                v.push_back(y);
                break;
            }
        }
        return v;
    }
};

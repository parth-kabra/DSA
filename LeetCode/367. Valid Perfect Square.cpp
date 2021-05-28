class Solution {
public:
    bool isPerfectSquare(int n) {
        if(n<=0){
            return false;
        }
        int sr=sqrt(n);
        return int(sr*sr)==n;
    }
};

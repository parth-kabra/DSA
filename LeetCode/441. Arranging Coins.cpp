class Solution {
public:
    int arrangeCoins(int n) {
        int low=0;
        int high=n;
        while(low <= high){
            long long int mid=low+(high-low)/2;
            long long int c=mid*(mid+1)/2;
            if(c==n) return (int)mid;
            if(n < c){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return (int)high;
    }
};

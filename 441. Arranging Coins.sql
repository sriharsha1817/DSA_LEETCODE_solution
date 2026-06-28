class Solution {
public:
    int arrangeCoins(int n) {
        int l=1,h=n;
        while(l<=h){
            long mid=l+(h-l)/2;
            long coins_n=mid*(mid+1)/2;
            if(coins_n==n) return mid;
            else if(coins_n<n) l=mid+1;
            else h=mid-1;
        }
        return h;
    }
};
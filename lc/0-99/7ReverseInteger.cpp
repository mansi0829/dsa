class Solution {
public:
    int reverse(int x) {
        long long remainder, ans=0;
        while(x) {
            remainder= x%10;
            // else if(reversed_int<=-2147483648) return 0;
            int temp = ans * 10 + remainder;
            if(temp/10!=ans) return 0;
            ans=temp;
            x /= 10;
        }
        return (ans<INT_MIN || ans>INT_MAX) ? 0 : ans;
    }
};
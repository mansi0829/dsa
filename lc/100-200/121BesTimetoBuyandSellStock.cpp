// approach: maintain minint and maxint variable, traverse through array
// find minint from array and then max of maxint and difference between 
// max and array array element

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minP=99999, maxP=0;
        for(int i=0; i<prices.size(); i++) {
            minP = min(minP, prices[i]);
            maxP = max(maxP, prices[i]-minP);
        }
        return maxP;
    }
};
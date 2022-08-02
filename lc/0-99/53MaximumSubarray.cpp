// approach: traverse through array maintain sum and maxint variable
// add numbers in sum and if sum is max than maxint the keep max of
// both and if at any point sum<0 then make sum=0

class Solution {
public:
    int maxSubArray(vector<int>& arr) { 
       int sum=0;
        int maxp=arr[0];
        for(int i=0; i<arr.size(); i++) {
            sum+=arr[i];
            maxp = max(sum, maxp);
            if(sum<0) {
                sum=0;
            }
                
        }
        return maxp;
    }
};
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int n = nums.size();
        // for(int i=0; i<n; i++){
        //     for(int j=i+1; j<n; j++){
        //         if(nums[i]==nums[j] && abs(i-j)<=k){
        //             return true;
        //         }
        //     }
        // }
        unordered_map<int, int> freq;
        for(int i=0; i<n; i++){
            // freq[nums[i]]++;
            int current = nums[i];
            if(freq.find(nums[i])!=freq.end() && i-freq[nums[i]]<=k){
                return true;
            }
            freq[nums[i]] = i;
        }
        return false;
        
    }
};
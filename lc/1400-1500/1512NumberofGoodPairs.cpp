//
class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int n= nums.size();
        vector <int> good_pair;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(nums[i] == nums[j] && i<j ){
                    good_pair.push_back(nums[i]);
                }
            }
        }
        return good_pair.size();
    }
};
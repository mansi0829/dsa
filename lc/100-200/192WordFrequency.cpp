class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int, int> maparr;
        for(int i=0; i<n; i++) {
            maparr[nums[i]]++;
        }
        vector<vector<int>> buckets(nums.size() + 1); 
        for (auto p : maparr)
            buckets[p.second].push_back(p.first);
        vector <int> ans;
        for(int i=buckets.size()-1; i>=0 && ans.size()<k ; i-- ) {
            for(int num: buckets[i]){
                ans.push_back(num);
                if(ans.size() == k ){
                    break;
                }
            }
        }
        
        
        return ans;
        
    }
};
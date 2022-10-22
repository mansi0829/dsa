class Solution
{
    public:
        vector<vector < int>> threeSum(vector<int> &nums)
        {
            int n = nums.size();
            vector<int> ans;
            vector<vector < int>> collect;
            for (int i = 0; i < n; i++)
            {
                for (int j = i; j < n; j++)
                {
                    for (int k = j; k < n; k++)
                    {
                        if (nums[i] + nums[j] + nums[k] == 0)
                        {
                            ans.push_back(nums[i]);
                            ans.push_back(nums[j]);
                            ans.push_back(nums[k]);
                            collect.push_back(ans);
                        }
                    }
                }
                
            }
            return collect;
        }
};
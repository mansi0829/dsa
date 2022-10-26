class Solution
{
public:
    bool checkSubarraySum(vector<int> &nums, int k)
    {
        int n = nums.size();
        unordered_map<int, int> map;
        int curr_sum = 0;
        map[0] = -1;
        if (n < 2)
            return false;
        for (int i = 0; i < n; i++)
        {
            curr_sum += nums[i];
            if (k != 0)
            {
                curr_sum = curr_sum % k;
            }
            if (map.find(curr_sum) != map.end())
            {
                if (i - map[curr_sum] > 1)
                    return true;
            }

            else
            {
                map[curr_sum] = i;
            }
        }
        return false;
    }
};
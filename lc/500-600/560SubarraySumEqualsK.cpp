// class Solution
// {
// public:
//     int subarraySum(vector<int> &nums, int k)
//     {
//         int n = nums.size();
//         int count = 0;

//         for (int i = 0; i < n; i++)
//         {
//             for (int j = i; j <= n; j++)
//             {
//                 int sum = 0;
//                 for (int k = i; k < j; k++)
//                 {
//                     // cout << nums[k];
//                     sum = sum + nums[k];
//                 }
//                 {
//                     count++;
//                 }
//             }
//         }
//         return count;
//     }
// };
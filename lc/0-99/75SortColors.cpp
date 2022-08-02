// approach: set low=0 mid=0 and high=n-1 variable while(mid<=high) run loop
// if(arr[mid]==0) then swap start and mid of arr and increment both vals
// if(arr[mid]==1) increment mid 
// if(arr[mid]==2) then swap mid and high of arr and decrement high.

class Solution
{
public:
    void sortColors(vector<int> &nums)
    {
        int n = nums.size();
        int low = 0, mid = 0, high = n - 1;
        while (mid <= high)
        {
            if (nums[mid] == 0)
            {
                swap(nums[low++], nums[mid++]);
            }
            else if (nums[mid] == 1)
            {
                mid++;
            }
            else if (nums[mid] == 2)
            {
                swap(nums[mid], nums[high--]);
            }
        }
        for (int i = 0; i < n; i++)
        {
            cout << nums[i];
        }
    }
};
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int indexPivot(vector<int> &nums)
    {
        int start = 0;
        int end = nums.size() - 1;
        int mid = start + (end - start) / 2;

        while (start < end)
        {
            if (nums[mid] >= nums[0])
            {
                start = mid + 1;
            }
            else
            {
                end = mid;
            }
            mid = start + (end - start) / 2;
        }
        return start;
    }
    int search(vector<int> &nums, int target)
    {
        if (nums[0] == target)
        {
            return 0;
        }

        int pivot = indexPivot(nums);
        if (target == nums[pivot])
        {
            return pivot;
        }

        int start = 0;
        int end = nums.size() - 1;
        int mid = -1;
        if (nums[pivot] <= target && target <= nums[nums.size() - 1])
        {
            start = pivot;
            end = nums.size() - 1;
            mid = start + (end - start) / 2;
        }
        else
        {
            start = 0;
            end = pivot - 1;
            mid = start + (end - start) / 2;
        }
        while (start <= end)
        {
            if (target == nums[mid])
            {
                return mid;
            }
            if (nums[mid] < target)
            {
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
            mid = start + (end - start) / 2;
        }
        return -1;
        // return -1;
    };
};
int main()
{
    vector<int> n = {4, 5, 6, 7, 0, 1, 2};
    int target = 0;
    Solution solve;
    int ans = solve.search(n, target);
    cout << ans << endl;
    return 0;
}
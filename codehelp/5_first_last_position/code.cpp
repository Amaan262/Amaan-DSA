#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int firstOcc(vector<int> &nums, int target)
    {
        if (nums.size() == 0)
        {
            return -1;
        }
        if (nums.size() > 0 && nums[0] == target)
        {
            return 0;
        }
        int ans = -1;
        int start = 0;
        int end = nums.size() - 1;
        int mid = start + (end - start) / 2;
        while (start <= end)
        {
            if (nums[mid] == target)
            {
                ans = mid;
                end = mid - 1;
            }
            else if (nums[mid] < target)
            {
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
            mid = start + (end - start) / 2;
        }
        return ans;
    };

    int lastOcc(vector<int> &nums, int target)
    {
        if (nums.size() == 0)
        {
            return -1;
        }
        if (nums.size() > 0 && nums[nums.size() - 1] == target)
        {
            return nums.size() - 1;
        }
        int ans = -1;
        int start = 0;
        int end = nums.size() - 1;
        int mid = start + (end - start) / 2;
        while (start <= end)
        {
            if (nums[mid] == target)
            {
                ans = mid;
                start = mid + 1;
            }
            else if (nums[mid] < target)
            {
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
            mid = start + (end - start) / 2;
        }
        return ans;
    }
    vector<int> searchRange(vector<int> &nums, int target)
    {

        int first = firstOcc(nums, target);
        int last = lastOcc(nums, target);
        return vector<int>{first, last};
    }
};
int main()
{
    vector<int> n = {5, 7, 7, 8, 8, 10};
    int target = 8;
    Solution solve;
    vector<int> ans = solve.searchRange(n, target);
    for (auto x:ans)
    {
        cout<<x<<" ";
    }
    
    return 0;
}
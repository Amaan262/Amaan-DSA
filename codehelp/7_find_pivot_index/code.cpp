#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int pivotIndex(vector<int> &nums)
    {
        int lsum = 0;
        int rsum = 0;
        for (int x : nums)
        {
            rsum += x;
        }
        for (int i = 0; i < nums.size(); i++)
        {
            if (lsum == rsum - nums[i])
            {
                return i;
            }
            else
            {
                lsum += nums[i];
                rsum -= nums[i];
            }
        }
        return -1;
    }
};
int main()
{
    vector<int> n = {1, 7, 3, 6, 5, 6};
    Solution solve;
    int ans = solve.pivotIndex(n);
    cout << ans << endl;
    return 0;
}
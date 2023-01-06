#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int pivotIndex(vector<int> &nums)
    {
        int lsum = 0;
        int tsum = 0;
        for (int x : nums)
        {
            tsum += x;
        }
        for (int i = 0; i < nums.size(); i++)
        {
            if (lsum == tsum - nums[i])
            {
                return i;
            }
            else
            {
                lsum += nums[i];
                tsum -= nums[i];
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
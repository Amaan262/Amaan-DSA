#include <bits/stdc++.h>
using namespace std;

#define int long long
#define PI 3.1415926535897932384626
#define all(x) (x).begin(), (x).end()
#define ps(x, y) fixed << setprecision(y) << x
#define w(t)  \
    int t;    \
    cin >> t; \
    while (t--)
#define rep(i, n) for (int i = 0; i < n; i++)
#define rep1(i, n) for (int i = 1; i < n; i++)
#define REP(i, k, n) for (int i = k; i < n; ++i)
#define REPR(i, k, n) for (int i = k; i > n; --i)
#define all(x) (x).begin(), (x).end()
class Solution
{
public:
    void bubbleSort(vector<int> &nums)
    {
        int n = nums.size();
        bool swapped = false;
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = 0; j < n - 1 - i; j++)
            {
                if (nums[j] > nums[j + 1])
                {
                    swap(nums[j], nums[j + 1]);
                    swapped = true;
                }
            }
            if (!swapped)
            {
                break;
            }
        }
        for (auto x : nums)
        {
            cout << x << " ";
        }
    }
};
int32_t main()
{

    vector<int> nums = {5, 4, 15, 9, 11};
    Solution solve;
    solve.bubbleSort(nums);

    return 0;
}
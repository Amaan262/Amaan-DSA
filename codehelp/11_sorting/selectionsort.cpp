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
    void selectionSort(vector<int> &nums)
    {
        int n = nums.size();
        for (int i = 0; i < n-1; i++)
        {
            int minIndex = i;
            for (int j = i+1; j < n; j++)
            {   
                if(nums[minIndex]>nums[j]){
                    minIndex =j;
                }

            }
            swap(nums[minIndex],nums[i]);
            
        }
        for(auto x: nums){
            cout<<x<<" ";
        }
    }
};
int32_t main()
{
    vector<int> nums = {2, 44, 3, 0, 11};
    Solution solve;
    solve.selectionSort(nums);

    return 0;
}
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
    void insertionSort(vector<int> &nums)
    {
        int n = nums.size();
        for (int i = 1; i < n; i++)
        {
            int temp = nums[i];     // 1
            int j = i - 1;          //10
            for (; j >= 0; j--)
            {
                if(nums[j]>temp){ //10 > 1
                    // shift
                    nums[j+1] = nums[j];  // 1 = 10
                }else{
                    break;
                }
            }
            nums[j+1] = temp;       // 1 = 1 
        }
        for (auto x : nums)
        {
            cout<<x<<" ";
        }
        
    }
};
int32_t main()
{
    vector<int> nums = {5, 4, 15, 9, 11};
    Solution solve;
    solve.insertionSort(nums);

    return 0;
}
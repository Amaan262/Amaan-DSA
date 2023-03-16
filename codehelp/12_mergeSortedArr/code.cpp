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
void copyV(vector<int> &v, int n)
{
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        v.push_back(temp);
    }
};
void print(vector<int> v)
{
    for (auto x : v)
    {
        cout << x << ' ';
    }
    cout << endl;
};

class Solution
{
public:
    vector<int> merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
    {
        int i = m - 1, j = n - 1, k = m + n - 1;

        while (j >= 0 and i >= 0)
        {
            if (nums1[i] > nums2[j])
            {
                nums1[k] = nums1[i];
                k--;
                i--;
            }
            else
            {
                nums1[k] = nums2[j];
                k--;
                j--;
            }
        }
        while(j>=0){
            nums1[k]= nums2[j];
            k--;
            j--;
        }
    }
};
int32_t main()
{
    vector<int> nums1, nums2;
    int m, n;
    cin >> m >> n;
    copyV(nums1, 6);
    copyV(nums2, n);
    Solution solve;
    // vector<int> ans =
    solve.merge(nums1, m, nums2, n);
    print(nums1);
    return 0;
}
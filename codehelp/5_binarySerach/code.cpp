#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define PI 3.1415926535897932384626
#define all(x) (x).begin(), (x).end()
#define ps(x, y) fixed << setprecision(y) << x
#define w(t)  \
    int t;    \
    cin >> t; \
    while (t--)
#define rep(i, n) for (int i = 0; i < n; i++)
#define REP(i, k, n) for (int i = k; i < n; ++i)
#define REPR(i, k, n) for (int i = k; i > n; --i)

class Solution
{
public:
    int binarySearch(vector<int> &arr, int n)
    {
        int start = 0;
        int end = n - 1;
        int mid = start + (end - start) / 2;
        int key = 2;
        int ans = 0;
        while (start <= end)
        {
            if (arr[mid] == key)
            {
                return mid;
            }
            else if (arr[mid] < key)
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
    }
};
int main()
{
    ll n;
    cin >> n;
    vector<int> arr;
    rep(i, n)
    {
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }
    Solution solve;
    ll ans = solve.binarySearch(arr, n);
    cout << ans << endl;
    return 0;
}
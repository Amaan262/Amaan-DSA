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
#define REP(i, k, n) for (int i = k; i < n; ++i)
#define REPR(i, k, n) for (int i = k; i > n; --i)

void solve()
{
    int n, y;
    cin >> n >> y;

    int arr[n];
    int OR = 0;
    bool flag = false;
    rep(i, n)
    {
        cin >> arr[i];
        OR |= arr[i];
    }

    for (int i = 0; i <= y; i++)
    {

        if ((OR | i) == y)
        {
            cout << i << endl;
            flag = true;
            break;
        }
    }
    if (!flag)
    {
        cout << "-1" << endl;
    }
}
int32_t main()
{
    w(t)
    {
        solve();
    }
    return 0;
};
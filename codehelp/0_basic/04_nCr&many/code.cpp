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
    ll factorial(int a)
    {
        if (a == 0)
        {
            return 1;
        }
        int ans = a;
        for (int i = a - 1; i > 0; i--)
        {
            ans = ans * i;
        }
        return ans;
    }
    ll nCr(int n, int r)
    {
        ll num = factorial(n);
        ll deno = (factorial(n - r) * factorial(r));
        return num / deno;
    }

    ll ap(int n)
    {
        ll ans = ((3 * n) + 7);
        return ans;
    }
    ll setbit(int a, int b)
    {
        int count = 0;
        while (a != 0)
        {
            if (a & 1)
            {
                count++;
            }
            a = a >> 1;
        }
        while (b != 0)
        {
            if (b & 1)
            {
                count++;
            }
            b = b >> 1;
        }
        return count;
    }
    ll fib(int n)
    {
        // 0 1 1 2 3 5 8 13
        //    if(n<=1){
        //     return n;
        //    }
        //     return fib(n-1) + fib(n-2);

        int x = 0, y = 1, z = 0;
        for (int i = 0; i < n; i++)
        {

            z = x + y;
            x = y;
            y = z;
        }
        return x;
    }
};
int main()
{
    ll n, r;
    cin >> n;
    Solution solve;
    // ll ans = solve.nCr(n,r);
    // ll ans = solve.ap(n);
    // ll ans = solve.setbit(n, r);
    ll ans = solve.fib(n);
    cout << ans << endl;
    return 0;
}
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
    void reverseWord(vector<char> &s,int n)
    {
    }
};
int32_t main()
{
    vector<char> s;
    int n = 16;
    // copyV(s, n)
    // Solution solve;
    // int ans = solve.reverseWord(n);
    // cout << ans << endl;
    return 0;
}
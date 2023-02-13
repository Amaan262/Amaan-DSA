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

long power(int x, int n)
{
    int pow = 1;
    for (int i = 0; i < n; i++)
    {
        pow = pow * x;
    }
    return pow;
}
void solve()
{

    int n;
    cin >> n;

    int ans = 0;
    int i = 0;
    while (n != 0)
    {
        int rem = n % 2;
        ans = rem * power(10, i) + ans;
        n = n / 2;
        i++;
    }
    cout << ans << endl;
};

void solve2()
{
    int n;
    cin >> n;

    int ans = 0;
    int i = 0;

    while (n != 0)
    {
        int bit = n & 1;
        ans = (bit * power(10, i)) + ans;
        n = n >> 1;
        i++;
    }
    cout<<ans<<endl;
};

// works in online ide


void solve3(){
    int n;
    cin>>n;
    unsigned int i = 0, ans = 0;
    if(n<0){
        n = pow(2,16)+n;
    }
    // cout<<n<<endl;
    while(n){
        int lastbit = n & 1;
        ans = (pow(10,i) * lastbit )  + ans;
        n = n >> 1;
        i++;
    }
        cout<<ans<<endl;


};

int32_t main()
{
    w(t)
    {

        // solve();
        solve2();
    }
    return 0;
}

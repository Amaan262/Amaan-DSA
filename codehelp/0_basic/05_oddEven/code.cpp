#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define PI 3.1415926535897932384626
#define all(x) (x).begin(), (x).end()
#define ps(x, y) fixed << setprecision(y) << x
#define w(t) int t; cin >> t; while (t--)
#define rep(i, n) for (int i = 0; i < n; i++)
#define REP(i, k, n) for (int i = k; i < n; ++i)
#define REPR(i, k, n) for (int i = k; i > n; --i)


class Solution{
public:
    bool OddEven(int n){
        if(n%2==0){
            return true;
        }
        else{
           return false;
        }
    }



};
int main()
{
    ll n;
    cin>>n;
    Solution solve;
    ll ans = solve.OddEven(n);
    cout<<ans<<endl;
    return 0;
}
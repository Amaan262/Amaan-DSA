#include <bits/stdc++.h>
using namespace std;

#define int long long
#define PI 3.1415926535897932384626
#define all(x) (x).begin(), (x).end()
#define ps(x, y) fixed << setprecision(y) << x
#define w(t) int t; cin >> t; while (t--)
#define rep(i, n) for (int i = 0; i < n; i++)
#define REP(i, k, n) for (int i = k; i < n; ++i)
#define REPR(i, k, n) for (int i = k; i > n; --i)


void solve(){
    int n;
    cin>>n;
    int ans = 0;
    int i = 0;
    while(n!=0){
        int digit = n % 10; // digit = n % 10;
       if(digit == 1){
           
        ans =  pow(2,i) + ans;
       } 
    // cout<<ans<<endl;
        n = n/10;
        i++;
    }
    cout<<ans<<endl;

};


int32_t main()
{
w(t){
solve();
}
    return 0;
}
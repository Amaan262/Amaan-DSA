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
    int arr[n];
    rep(i,n){
        cin>>arr[i];
    }
    int max = INT_MIN;
    int min = INT_MAX;
    rep(i,n){
        if(max<arr[i]){
            max = arr[i];
        }
        if(min>arr[i]){
            min = arr[i];
        }
    }
    cout<<"max: "<<max<<" min: "<<min<<endl;



};


int32_t main()
{
w(t){
solve();
}
    return 0;
}
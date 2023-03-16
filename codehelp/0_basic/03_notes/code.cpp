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
  int amount;
  cin>>amount;
  int it = 1;
  switch (it)
  {
  case 1:
      cout<<"100 notes : " <<amount / 100 <<endl;
      amount = amount % 100;
  case 2: 
      cout<<"50 notes : " << amount / 50 <<endl;
      amount = amount % 50;
  case 3: 
      cout<<"20 notes : " << amount / 20 <<endl;
      amount = amount % 20;
  case 4:
      cout<<"1 notes : " << amount / 1 <<endl;
      break;
  default:
    break;
  }



};


int32_t main()
{
// w(t)
{
solve();
}
  return 0;
}
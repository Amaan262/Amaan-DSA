// #include <iostream>

// using std::cin;
// using std::cout;
// using std::endl;

// int main()
// {
//     int amount;
//     int count = 1;

//     cout << "Enter the amount \n";
//     cin >> amount;

//     switch (count)
//     {
//     case 1:
//         cout << "Number of 100 notes "<< (amount / 100) << "\n";
//         amount = amount % 100;
//     case 2:
//         cout << "Number of 50 notes " << amount / 50 << "\n";
//         if (amount / 50 != 0)
//         {
//             amount = amount % 50;
//         }
//     case 3:
//         cout << "Number of 20 notes ";
//         cout << amount / 20 << "\n";
//         if (amount / 20 != 0)
//         {
//             amount = amount % 20;
//         }
//     case 4:
//         cout << "Number of 1 notes ";
//         cout << amount / 1 << endl;
//         break;
//     default:
//         break;
//     }
//     return 0;
// }
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
    int A[n];
    rep(i,n){
        cin>>A[i];
    }
    int maxfreq = 0;
    
    rep(i,n){
        cout<<A[i]<<" ";
    }
    cout<<endl;
    sort(A,A+n);
  for (int i = 0; i < n; i++)
  {
    cout<<A[i]<<" ";
  }
  
    // for(int i =0; i<n; i++){
    //     int count = 0;
    //     for(int j = 0; j < n; j++){
    //         if(A[i]==A[j]){
    //             count++;
    //         }
    //         if(count>maxfreq){
    //             maxfreq = count;
    //         }
    //     }
    // }

    cout<<n-maxfreq<<endl;

};


int32_t main()
{
w(t){
solve();
}
    return 0;
}
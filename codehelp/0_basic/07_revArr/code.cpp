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
    
    // for (int  i = 0; i < n/2; i++) // reverse array 
    // {
    //     int temp = arr[i];
    //     arr[i] = arr[n-1-i];
    //     arr[n-1-i] = temp;

    // }
    // int start = 0;
    // int end = n-1;
    // while (start<=end)
    // {
    //     swap(arr[start],arr[end]);
    //     start++;
    //     end--;
    // }
    
    for (int i = 0; i < n-1; i+=2) // swap alternate
    {
        int temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i+1] = temp;


    }
    


    rep(i,n){
        cout<<arr[i]<<" "; 
    }
    



};


int32_t main()
{
w(t){
solve();
}
    return 0;
}
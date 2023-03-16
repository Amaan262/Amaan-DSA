#include <bits/stdc++.h>
using namespace std;

#define int long long
#define PI 3.1415926535897932384626
#define all(x) (x).begin(), (x).end()
#define ps(x, y) fixed << setprecision(y) << x
#define w(t) int t;   cin >> t; while (t--)
#define rep(i, n) for (int i = 0; i < n; i++)
#define rep1(i, n) for (int i = 1; i < n; i++)
#define REP(i, k, n) for (int i = k; i < n; ++i)
#define REPR(i, k, n) for (int i = k; i > n; --i)
#define all(x) (x).begin(), (x).end()
void copyV(vector<int> &v, int n){for (int i = 0; i < n; i++){int temp;cin >> temp;v.push_back(temp);}};
void print(vector<int> v){for (auto x : v){cout << x << ' ';}cout << endl;};

class Solution{
public:
bool isPresent(int arr[][4],int n,int m,int target){

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j]==target)
            {
                return true;
            }
            
        }
        
    }
    return false;

}
    
void rowSum(int arr[][4],int n,int m){
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = 0; j < m; j++)
        {
            sum += arr[i][j];
        }
        cout<<sum<<endl;
    }
    cout<<endl;
}
void colSum(int arr[][4],int n,int m){
    for (int j = 0; j < m; j++)
    {
        int sum = 0;
        for (int i = 0; i < n;i++)
        {
            sum += arr[i][j];
        }
        cout<<sum<<endl;
    }
    cout<<endl;
    
}


};
int32_t main(){
int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
int target = 14;
Solution solve;
// int ans = solve.isPresent(arr,3,4,target);
// if(ans){
//     cout<<"Found"<<endl;
// }else{
//     cout<<"Not Found"<<endl;
// }
solve.rowSum(arr,3,4);
solve.colSum(arr,3,4);

    return 0;
}
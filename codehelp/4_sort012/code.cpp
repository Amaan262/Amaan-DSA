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
    void sort012(vector<int> &arr, int n)
    {
        int start = 0;
        int mid = 0;
        int end = n - 1;
        while (mid <= end)
        {
            if (arr[mid] == 0)
            {
                swap(arr[start],arr[mid]);
                mid++;
                start++;
            }
            else if (arr[mid]== 1)
            {
                mid++;
            }
            else
            {
                swap(arr[mid], arr[end]);
                end--;
            }
        }
        rep(i, n)
        {
            cout << arr[i] << " ";
        }
        cout<<endl;
    }
};
int main()
{
    w(t){

    ll n;
    cin >> n;
    vector<int> arr;
    rep(i, n)
    {   int temp ;
        cin>>temp;
        arr.push_back(temp);
    }
    Solution solve;
    solve.sort012(arr, n);
    }
    
    return 0;
}
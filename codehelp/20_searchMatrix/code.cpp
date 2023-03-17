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
};void print(vector<int> v)
{
    for (auto x : v)
    {
        cout << x << ' ';
    }
    cout << endl;
};
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int col = matrix[0].size();
    
        int start = 0;
        int end = (row*col) - 1;
        int mid = start + (end - start)/2;
        while(start<=end){
            if(target==matrix[mid/col][mid%col]){
                return true;
            }else if(target<matrix[mid/col][mid%col]){
                end = mid - 1;

            }else{
                start = mid + 1;
            }
            mid = start + (end-start)/2;
        }
        return false;
    }
};


int32_t main()
{
    vector<vector<int>> nums = {{1,2,3},{4,5,6},{7,8,9}};
    Solution solve;
    bool ans = solve.rotate(nums);
    if(ans){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    // print(nums);
    return 0;
}
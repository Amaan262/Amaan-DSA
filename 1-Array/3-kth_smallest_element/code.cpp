#include <bits/stdc++.h>
using namespace std;

#define ll long long
int main()
{
    int n = 6;
    int k = 3;
    int arr[n] = {7, 10, 4, 3, 20, 15};
    sort(arr, arr + n);
    cout << arr[k - 1] << endl;

    return 0;
}
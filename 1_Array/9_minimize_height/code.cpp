#include <bits/stdc++.h>
using namespace std;

#define ll long long
int main()
{
    int n = 4;
    int k = 2;
    int arr[n] = {1, 5, 8, 10};
    // int arr[n] = {2, 6, 3, 4, 7, 2, 10, 3, 2, 1};

    sort(arr, arr + n);
    int ans = arr[n-1] - arr[0];

    int tmin = arr[0];
    int tmax = arr[n - 1];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] - k < 0)
        {
            continue;
        }

        tmin = min(arr[0] + k, arr[i] - k);
        tmax = max(arr[i - 1] + k, arr[n - 1] - k);
    }

    cout << min(tmax - tmin, ans) << endl;
    return 0;
}

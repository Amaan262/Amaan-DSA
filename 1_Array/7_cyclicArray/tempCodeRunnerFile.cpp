#include <bits/stdc++.h>
using namespace std;

#define ll long long
int main()
{
    int n = 5;
    int a[n] = {1, 2, 3, 4, 5};
    // int i = 0;
    cout<<a[0]<<" ";
    cout<<a[n-1]<<" ";
    int temp = a[0];
    a[0] = a[n];
    a[n] = temp;

    // for (int i = 0; i < n - 1; i++)
    // {
    //     int temp = a[i];
    //     a[i] = a[i + 1];
    //     a[i + 1] = temp;
    // }

    for (int i = 0; i < n-1; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}
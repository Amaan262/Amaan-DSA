#include <bits/stdc++.h>
using namespace std;

#define ll long long
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    // cout<<sizeof(arr[0])<<endl; // size of array element
    // cout<<sizeof(arr)<<endl; //size of full array
    for (int i = 0; i < n / 2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}

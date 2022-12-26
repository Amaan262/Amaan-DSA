#include <bits/stdc++.h>
using namespace std;

#define ll long long
int main()
{

    int arr[5] = {0, 2, 1, 2, 0};
    int n = sizeof(arr) / sizeof(arr[0]);
    // Bubble Sort
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {

            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
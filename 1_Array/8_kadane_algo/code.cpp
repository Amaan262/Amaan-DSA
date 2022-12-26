#include <bits/stdc++.h>
using namespace std;

#define ll long long
int main()
{
    int n = 5;
    int a[n] = {1, 2, 3, -2, 5};
    int maxsum = INT_MIN;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + a[i];
        if (maxsum < sum)
        {
            maxsum = sum;
        }
        if (sum < 0)
        {
            sum = 0;
        }
    }
    cout << maxsum << endl;

    return 0;
}
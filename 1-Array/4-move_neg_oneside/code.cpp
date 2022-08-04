#include <bits/stdc++.h>
using namespace std;

#define ll long long
int main()
{   int n = 8;
    int arr[n] = {-1,-4,4 ,5 ,3, -5, -6,-3};

    sort(arr,arr+n);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<endl;
    }
    



    return 0;
}
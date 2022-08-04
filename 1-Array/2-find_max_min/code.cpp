#include <bits/stdc++.h>
using namespace std;

#define ll long long
int main()
{
    int n = 1;
    int arr[n] = {1};
    int max = INT_MIN;
    int min = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        if(arr[i]<min){
            min = arr[i];
        }
    }
    cout<<"MAX : "<<max<<" MIN: "<<min<<endl;


    return 0;
}
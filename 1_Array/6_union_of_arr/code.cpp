#include <bits/stdc++.h>
using namespace std;

#define ll long long
int main()
{
    vector<int> arr1 = {85, 25, 1, 32, 54, 6};
    vector<int> arr2 = {85, 2};
    int count = arr1.size();
    // Approach 1
    //  for (int i = 0; i < arr2.size(); i++)
    //  {
    //      auto it = find(arr1.begin(), arr1.end(), arr2[i]);

    //     if (it == arr1.end()) // not exists
    //     {
    //         count += 1;
    //     }
    // }

    // cout << count << endl;

    // Approach 2

    set<int> u;
    for (int i = 0; i < arr1.size(); i++)
    {
        u.insert(arr1[i]);
    }
    for (int i = 0; i < arr2.size(); i++)
    {

        u.insert(arr2[i]);
    }
    cout<<u.size()<<endl;
    return 0;
}
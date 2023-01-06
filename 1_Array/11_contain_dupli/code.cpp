// #include <bits/stdc++.h>
// using namespace std;

// #define ll long long
// int main()
// {
//     vector<int> nums = {1, 1, 2, 3, 1};

//     bool flag = false;
//     for (int i = 0; i < nums.size(); i++)
//     {
//         for (int j = i + 1; j < nums.size(); j++)
//         {
//             if (nums[i] == nums[j])
//             {
//                 flag = true;
//             cout << "loop" << endl;
//                 return flag;
//             }
//         }
//     }
//     cout << flag << endl;
//     // return 0;
//     return flag;
// }
#include <bits/stdc++.h>
using namespace std;

#define ll long long
int main()
{
    vector<int> nums = {1, 4, 2, 5, 4};

    set<int> card;
    bool flag = false;
    for (int i = 0; i < nums.size(); i++)
    {

        if (!card.insert(nums[i]).second)
        {

            flag = true;
        }
    }
  for (auto it = card.begin(); it != card.end(); it++)
  {
    cout<<*it <<" ";
  }
  

    // cout << flag << endl;?

    return 0;
}
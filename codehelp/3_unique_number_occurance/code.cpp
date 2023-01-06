#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool uniqueOccurrences(vector<int> &arr)
    {
        map<int, int> mp;
        for (int i = 0; i < arr.size(); i++)
        {
            mp[arr[i]]++;
        }
        unordered_set<int> s;
        for (auto x : mp)
        {
            s.insert(x.second);
        }

        return mp.size() == s.size();
    }
};
int main()
{
    vector<int> n = {1, 2};
    Solution solve;
    int ans = solve.uniqueOccurrences(n);
    if(ans){
        cout<<"TRUE"<<endl;
    }else{
        cout<<"FALSE"<<endl;
    }
    return 0;
}
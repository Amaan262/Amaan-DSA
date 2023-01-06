#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
     vector<int> findDuplicates(vector<int>& nums) {
        unordered_map<int,int> mp;
        vector<int>ans;
        for(int i =0 ; i<nums.size();i++){
            mp[nums[i]]++;
        }
        for(auto it:mp){
            if(it.second==2){
                ans.push_back(it.first);
            }
        }
        return ans;
    }
};
int main()
{
    vector<int>n = {4,3,2,7,8,2,3,1};
    Solution solve;
    vector<int> ans = solve.findDuplicates(n);
    for(auto x:ans){
    cout<<x<<" ";
    }
    return 0;
}
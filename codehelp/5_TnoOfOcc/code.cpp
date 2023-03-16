#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define PI 3.1415926535897932384626
#define all(x) (x).begin(), (x).end()
#define ps(x, y) fixed << setprecision(y) << x
#define w(t) int t; cin >> t; while (t--)
#define rep(i, n) for (int i = 0; i < n; i++)
#define REP(i, k, n) for (int i = k; i < n; ++i)
#define REPR(i, k, n) for (int i = k; i > n; --i)


class Solution {
public:
    int firstOcc(vector<int>&nums, int target){

        if(nums.size()==0){
            return -1;
        }
        if(nums.size()>0 && nums[0] == target){
            return 0;
        }
        int start = 0;
        int end = nums.size()-1;
        int mid = start + (end-start)/2;
        int ans = -1;
        while(start<=end){
            if(nums[mid]==target){
                ans = mid;
                end = mid-1;
            }else if(nums[mid]<target){
                start = mid + 1;
            }else{
                end = mid -1;
            }
            mid = start + (end-start)/2;
        }
        return ans;
    };

    int lastOcc(vector<int>&nums, int target){
        
        if(nums.size()==0){
            return -1;
        }
        if(nums.size()>0 && nums[nums.size()-1] == target){
            return nums.size()-1;
        }
        int start = 0;
        int end = nums.size()-1;
        int mid = start + (end-start)/2;
        int ans = -1;
        while(start<=end){
            if(nums[mid]==target){
                ans = mid;
                start = mid+1;
            }else if(nums[mid]<target){
                start = mid + 1;
            }else{
                end = mid -1;
            }
            mid = start + (end-start)/2;
        }
        return ans;
    };

    int totalOcc(vector<int>& nums, int target) {
        int ans=0;
        int first = firstOcc(nums,target);
        int last = lastOcc(nums,target);
        ans = last - first + 1;
        return ans;
        
    }
};
int main()
{
    ll n,target;
    cin>>n;
    vector<int>nums;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin>>temp;
        nums.push_back(temp);
    }
    cin>>target;
    
    Solution solve;
    ll ans = solve.totalOcc(nums,target);
    cout<<ans<<endl;
    return 0;
}
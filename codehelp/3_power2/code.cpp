#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
   bool isPowerofTwo(int n){

        if(n==0){
            return false;
        }
        while (n%2==0)
        {
            n = n / 2;
        }
        return n == 1;
        
    }



};
int main()
{
    int n;
    cin>>n;
    Solution solve;
    int ans = solve.isPowerofTwo(n);
    cout<<ans<<endl;
    return 0;
}
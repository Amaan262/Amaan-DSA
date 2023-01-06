#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    int reverse(int x) {
        int ans = 0;
        int i = 0;
        while(x){
            int digit = x % 10;
            if((ans>INT_MAX/10)|| (ans<INT_MIN/10) ){
                return 0;
            }
            ans = (ans * 10) + digit;
            x /=10;
        }
        return ans;
    }



};
int main()
{
    int n;
    cin>>n;
    Solution solve;
    int ans = solve.reverse(n);
    cout<<ans<<endl;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum = 0;
        int pro = 1;
        while(n>0){
            sum += n%10;
            pro *= n%10;
            n = n/10; 

        }
       return pro-sum;
    }
};
int main()
{
    Solution solve;
    int n = 23;
    int ans = solve.subtractProductAndSum(n);
    cout<<ans<<endl;

    return 0;
}
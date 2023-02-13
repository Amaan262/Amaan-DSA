#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    int bitwiseComplement(int n){
        int mask = 0;
        int comp = ~n;
        int ans = 0;
        if(n==0){
            return 1;
        }
        while(n!=0){
            mask = (mask << 1) | 1;
            n = n >> 1;
        }
        ans = comp & mask;
        return  ans;
    }



};
int main()
{
    int n;
    cin>>n;
    Solution solve;
    int ans = solve.bitwiseComplement(n);
    cout<<ans<<endl;
    return 0;
}
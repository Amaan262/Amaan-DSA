#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
     int hammingWeight(uint32_t n) {
        int count = 0;
        while(n!=0){
            if(n&1){
                count++;
        cout<<"N = "<<n<<endl;
            }
            n= n>>1;

        }
        return count;
    }



};
int main()
{
    unsigned int n = 00000000000000000000000000001011;
    // cin>>n;
    Solution solve;
    int ans = solve.hammingWeight(n);
    cout<<ans<<endl;
    return 0;
}
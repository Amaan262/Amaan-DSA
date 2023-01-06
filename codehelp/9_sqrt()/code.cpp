#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int mySqrt(int x)
    {
        int start = 0;
        int end = x;
        long long int mid = start + (end - start) / 2;
        long long int ans = -1;
        while (start <= end)
        {
            long long int square = mid * mid;
            if (square == x)
            {
                return mid;
            }
            if (square > x)
            {
                end = mid - 1;
            }
            else
            {
                ans = mid;
                start = mid + 1;
            }
            mid = start + (end - start) / 2;
        }
        return ans;
    }
};
int main()
{
    int n = 4;

    Solution solve;
    int ans = solve.mySqrt(n);
    cout << ans << endl;
    return 0;
}
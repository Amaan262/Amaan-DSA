<h1>69. Sqrt(x)</h1>
<h2><a href="https://leetcode.com/problems/sqrtx/description/" >Problem link</a></h2>

1. using binary search 
2. check mid * mid == x then return mid;
3. check mid * mid > x then end = mid -1;
4. else ans = mid and start mid + 1;
5. update mid 
6. return ans;
<h1>191. Number of 1 Bits</h1>
<h2><a href="https://leetcode.com/problems/number-of-1-bits/description/" target="_blank">Problem link</a></h2>

1. run a loop for n != 0;
2. perform and operation with n and 1 to confirm digit is one (as n&1 == 1 if last digit is 1 else 0) and updating count by 1;
3. now update n by left shifting it
4. return count

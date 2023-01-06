<h1>852. Peak Index in a Mountain Array</h1>
<h2><a href="https://leetcode.com/problems/peak-index-in-a-mountain-array/description/" >Problem link</a></h2>

1. using binary search
2. check element at mid is smaller than element at mid+1 if true start = mid + 1;
3. else end = mid
4. update the mid
5. return mid;
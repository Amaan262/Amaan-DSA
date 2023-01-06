<h1>33. Search in Rotated Sorted Array</h1>
<h2><a href="https://leetcode.com/problems/search-in-rotated-sorted-array/description/" >Problem link</a></h2>

1. by using binary search 
2. find pivot index
3. then check target is equal to element at pivot index if true return pivot;
4. again run a binary search to find the element in the array
5. check target range and then run binary search according to that;
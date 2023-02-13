<h1>34. Find First and Last Position of Element in Sorted Array</h1>
<h2><a href="https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/description/" target="_blank" >Problem link</a></h2>

1. By Binary searching fing the first occurance and the second occurance 


binary search\
1. initialize ans =-1;
2. check if size of array is == 0 return -1;
3. check if first element is equal to target return 0;
4. define start = 0; end = nums.size()-1; and mid = start + (end-start)/2;
5. then run a loop for start<=end
6. check element at mid is equall to target then return mid;
7. else element at mid is smaller than target then start = mid +1;
8. else end = mid -1;
9. and update mid = start +(end-start)/2;
10. and return the ans;
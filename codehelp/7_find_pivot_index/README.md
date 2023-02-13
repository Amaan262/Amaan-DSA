<h1>724. Find Pivot Index</h1>
<h2><a href="https://leetcode.com/problems/find-pivot-index/description/" target="_blank" >Problem link</a></h2>

1. initialize left sum = 0; and store sum of all array in totalsum
2. run a loop till size and check the leftsum is equal to totalsum - element at i posiiion if true return i
3. else leftsum + element at i and total sum - element at i
4. default return -1;
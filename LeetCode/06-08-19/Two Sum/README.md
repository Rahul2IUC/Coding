# [Two Sum:][title]
Given an array of integers, return indices of the two numbers such that they add up to a specific target.
You may assume that each input would have exactly one solution, and you may not use the same element twice.

**Example:**
```
Given nums = [2,7,11,15], target = 9,
Because nums[0] + nums[1] = 2 + 7 = 9,
return [0, 1]
```
-------------------------------------------
1. We simply used the for loops to find the solution the whose time complexity is O(n*n)
2. After that we leanr C++ STL:
               (i)sort(startaddress, endaddress)
                   startaddress: the address of the first element of the array
                   endaddress: the address of the next contiguous location of the last element of the array.
                   So actually sort() sorts in the range of (startaddress,endaddress) 
               (ii)Comparator function & pair
                   this program give us time complexity O(nlogn)
3. At last we have studied the best way to solve this problem by implementing hash table.
               we have used: 
                           unordered_map
                           and we came to know that HashTable can insert,delete and search an element in O(1)
                           
              And through this we solved the problem in time complexity O(n)  
[title]:https://leetcode.com/problems/two-sum/

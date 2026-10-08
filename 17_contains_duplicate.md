## Problem: Contains Duplicate (Easy)
**Link:** https://leetcode.com/problems/contains-duplicate/

### Approach
Sort the array with `qsort`, so equal values end up next to each other, then compare each element with its neighbour in a single pass.

### Complexity
- Time: O(n log n)
- Space: O(1) extra

### Notes
The comparator uses `<` and `>` instead of `a - b`, which avoids integer overflow for large positive and negative values. A hash set would give O(n) time, but C has no built-in hash set, so sorting is simpler and still fast.

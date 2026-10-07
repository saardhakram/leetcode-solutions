## Problem: Binary Search (Easy)
**Link:** https://leetcode.com/problems/binary-search/

### Approach
Divided the search interval in half continuously on a sorted array by checking the target against the middle element.

### Complexity
- Time: $O(\log n)$
- Space: $O(1)$

### Notes
Midpoint is computed as `low + (high - low) / 2` to prevent integer overflow.

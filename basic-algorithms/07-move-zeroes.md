## Problem: Move Zeroes (Easy-Medium)
**Link:** https://leetcode.com/problems/move-zeroes/

### Approach
Used a two-pointer approach where `lastNonZero` keeps track of non-zero positions, swapping non-zero elements forward as encountered.

### Complexity
- Time: $O(n)$
- Space: $O(1)$

### Notes
Preserves the relative order of non-zero elements in-place.

## Problem: Two Sum (Easy)
**Link:** https://leetcode.com/problems/two-sum/

### Approach
Used a brute-force double loop to check every pair of elements. Returns dynamic memory indices when the target sum matches.

### Complexity
- Time: $O(n^2)$
- Space: $O(1)$

### Notes
A hash map approach achieves $O(n)$ time complexity, but nested loops allow execution without external C library overhead.

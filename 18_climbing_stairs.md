## Problem: Climbing Stairs (Easy)
**Link:** https://leetcode.com/problems/climbing-stairs/

### Approach
To reach step n you must come from step n-1 (one step) or step n-2 (two steps), so `ways(n) = ways(n-1) + ways(n-2)`. Instead of recursion, keep only the last two values and build up from the bottom.

### Complexity
- Time: O(n)
- Space: O(1)

### Notes
Plain recursion recomputes the same values again and again (O(2^n)). Keeping just two variables is the bottom-up dynamic programming version and needs no array.

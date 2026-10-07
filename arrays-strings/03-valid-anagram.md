## Problem: Valid Anagram (Easy)
**Link:** https://leetcode.com/problems/valid-anagram/

### Approach
Tracked character frequencies using a fixed-size frequency array of 26 integers representing lowercase letters.

### Complexity
- Time: $O(n)$
- Space: $O(1)$

### Notes
Lengths are checked upfront to reject unequal strings in $O(1)$ time.

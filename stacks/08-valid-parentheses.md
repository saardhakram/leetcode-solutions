## Problem: Valid Parentheses (Easy-Medium)
**Link:** https://leetcode.com/problems/valid-parentheses/

### Approach
Used an array-based stack to push opening brackets and pop/verify matching pairs upon encountering closing brackets.

### Complexity
- Time: $O(n)$
- Space: $O(n)$

### Notes
Checks if the stack is completely empty at the end to catch trailing unclosed brackets.

## Problem: Reverse Linked List (Bonus)
**Link:** https://leetcode.com/problems/reverse-linked-list/

### Approach
Iterated through the linked list while reassigning `next` pointers backwards using `prev`, `curr`, and `next` pointer tracking.

### Complexity
- Time: $O(n)$
- Space: $O(1)$

### Notes
Performed iteratively to avoid stack overflow issues common with recursion.

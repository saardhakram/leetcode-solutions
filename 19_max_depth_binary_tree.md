## Problem: Maximum Depth of Binary Tree (Easy)
**Link:** https://leetcode.com/problems/maximum-depth-of-binary-tree/

### Approach
Recursive depth-first search. An empty tree has depth 0; otherwise the depth is one more than the deeper of the two subtrees.

### Complexity
- Time: O(n), every node is visited once
- Space: O(h) for the call stack, where h is the height of the tree

### Notes
My first tree problem. The same "solve for children, then combine" pattern works for many tree questions, such as counting nodes or checking if a tree is balanced.

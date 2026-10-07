## Problem: Longest Common Prefix (Easy-Medium)
**Link:** https://leetcode.com/problems/longest-common-prefix/

### Approach
Initialized prefix as the first string and compared it sequentially with remaining strings, shortening the prefix string whenever characters diverged.

### Complexity
- Time: $O(S)$ where $S$ is the sum of all characters across strings
- Space: $O(1)$

### Notes
Truncating the prefix early optimizes comparisons for dissimilar strings.

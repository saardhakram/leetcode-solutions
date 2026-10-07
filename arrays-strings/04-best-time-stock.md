## Problem: Best Time to Buy and Sell Stock (Easy-Medium)
**Link:** https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

### Approach
Maintained a running minimum price while iterating through the array, updating the max profit whenever current price minus minimum price exceeded the recorded max.

### Complexity
- Time: $O(n)$
- Space: $O(1)$

### Notes
A single pass avoids evaluating all buy-sell combinations ($O(n^2)$).

// 70. Climbing Stairs (Easy) · Topic: Dynamic Programming
// https://leetcode.com/problems/climbing-stairs/
// Idea: ways(n) = ways(n-1) + ways(n-2), like Fibonacci.
// Time: O(n)   Space: O(1)

int climbStairs(int n) {
    if (n <= 2) {
        return n;
    }

    int prev2 = 1;
    int prev1 = 2;
    int current = 0;

    for (int i = 3; i <= n; i++) {
        current = prev1 + prev2;
        prev2 = prev1;
        prev1 = current;
    }

    return current;
}

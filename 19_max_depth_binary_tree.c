// 104. Maximum Depth of Binary Tree (Easy) · Topic: Trees / Recursion
// https://leetcode.com/problems/maximum-depth-of-binary-tree/
// Idea: depth = 1 + max(depth of left subtree, depth of right subtree).
// Time: O(n)   Space: O(h) for the recursion stack (h = tree height)

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

int maxDepth(struct TreeNode* root) {
    if (root == NULL) {
        return 0;
    }

    int leftDepth = maxDepth(root->left);
    int rightDepth = maxDepth(root->right);

    return (leftDepth > rightDepth ? leftDepth : rightDepth) + 1;
}

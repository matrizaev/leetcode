/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
struct TreeNode* searchBST(struct TreeNode* root, int val){
    if (root){
        if (root->val == val)
            return root;
        struct TreeNode* right = searchBST(root->right, val);
        if (right && right->val == val)
            return right;
        struct TreeNode* left = searchBST(root->left, val);
        if (left && left->val == val)
            return left;
    }
    return NULL;
}

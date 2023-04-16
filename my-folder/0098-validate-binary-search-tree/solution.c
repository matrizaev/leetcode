/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

bool _isValidBST(struct TreeNode* root, struct TreeNode* min, struct TreeNode* max){
    if (!root)
        return true;
    if (min && (root->val <= min->val))
        return false;
    if (max && (root->val >= max->val))
        return false;
    return _isValidBST(root->right, root, max) && _isValidBST(root->left, min, root);
}

bool isValidBST(struct TreeNode* root){
    return _isValidBST(root, NULL, NULL);
}

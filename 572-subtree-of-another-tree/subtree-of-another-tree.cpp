/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if (root == nullptr) {
            return subRoot == nullptr;
        }
        
        // Check if the current tree matches subRoot
        if (isSame(root, subRoot)) {
            return true;
        }
        
        // Recursively check the left and right subtrees
        return isSubtree(root->left, subRoot) || isSubtree(root->right, subRoot);
    }

private:
    bool isSame(TreeNode* s, TreeNode* t) {
        // Both nodes are nullptr
        if (s == nullptr && t == nullptr) {
            return true;
        }
        
        // One of the nodes is nullptr
        if (s == nullptr || t == nullptr) {
            return false;
        }
        
        // Both nodes are non-null, compare their values and recursively their subtrees
        return s->val == t->val && 
               isSame(s->left, t->left) && 
               isSame(s->right, t->right);
    }
};

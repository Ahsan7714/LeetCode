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
    int rangeSumBST(TreeNode* root, int low, int high) {
        if(root==NULL) return 0;

      // check the current node
        if(root->val >=low && root->val <= high){
            return root->val + rangeSumBST(root->left,low,high)
                           + rangeSumBST(root->right,low,high)  ;
        } 
         // if current value is less than the low range then dont go left only go right..
            if(root->val < low) return rangeSumBST(root->right,low,high);

            // the cuurent value is more than the high value then dont go right only go left 
             return rangeSumBST(root->left,low,high) ;

    }
};
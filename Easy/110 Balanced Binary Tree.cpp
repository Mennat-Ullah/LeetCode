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
   int maxDepth(TreeNode* root) {
        if( root == nullptr ) return 0;
        int maxDepthRight =  maxDepth(root->right);
        int maxDepthLeft =  maxDepth(root->left);
        return max(maxDepthRight , maxDepthLeft) + 1;
   }
    bool isBalanced(TreeNode* root) {
        if( root == nullptr ) return true;
        int maxDepthRight =  maxDepth(root->right);
        int maxDepthLeft =  maxDepth(root->left);
        return abs(maxDepthRight - maxDepthLeft) <= 1
            && isBalanced(root->right) 
            && isBalanced(root->left);
        
    }
};

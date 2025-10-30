class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        // Traverse the tree
        while (root) {
            if (p->val < root->val && q->val < root->val) {
                // Both nodes are in the left subtree
                root = root->left;
            } 
            else if (p->val > root->val && q->val > root->val) {
                // Both nodes are in the right subtree
                root = root->right;
            } 
            else {
                // We have found the split point — LCA
                return root;
            }
        }
        return nullptr;
    }
};

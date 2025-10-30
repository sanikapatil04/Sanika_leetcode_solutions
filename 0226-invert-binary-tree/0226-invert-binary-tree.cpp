class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        // Base case: if the tree is empty, return null
        if (root == nullptr) return nullptr;

        // Swap the left and right children
        swap(root->left, root->right);

        // Recursively invert the left and right subtrees
        invertTree(root->left);
        invertTree(root->right);

        // Return the root node
        return root;
    }
};

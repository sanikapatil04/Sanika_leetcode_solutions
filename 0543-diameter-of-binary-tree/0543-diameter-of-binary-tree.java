public class Solution {
    private int diameter = 0;

    public int diameterOfBinaryTree(TreeNode root) {
        depth(root);  // Compute the depth of each node and update the diameter
        return diameter;
    }

    private int depth(TreeNode node) {
        if (node == null) {
            return 0;
        }

        // Recursively find the depth of the left and right subtrees
        int leftDepth = depth(node.left);
        int rightDepth = depth(node.right);

        // Update the diameter (the longest path between any two nodes)
        diameter = Math.max(diameter, leftDepth + rightDepth);

        // Return the depth of the current node
        return 1 + Math.max(leftDepth, rightDepth);
    }
}

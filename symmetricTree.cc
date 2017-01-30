struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode(int x) : val(x), left(NULL), right(NULL) {}
  };
 
class Solution {
public:

    bool helper (TreeNode *left, TreeNode* right) {
        if (!right && !left) return true;
        if (!right || !left) return false;
        if (left->val != right->val) return false;
        return helper(right->right, left->left) && helper(left->right, right->left);
    }
    bool isSymmetric(TreeNode* root) {
        if (!root) return true;
        return helper(root->left, root->right);
    }
};

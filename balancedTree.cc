struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode(int x) : val(x), left(NULL), right(NULL) {}
  };
 
class Solution {
public:

    int height (TreeNode * root) {
            if (root == NULL) return 0;
            int left = height (root->left);
            
            if (left == -2) return -2;
            int right = height(root->right);
            if (right == -2) return -2;
            
            if (abs (left - right) > 1) return -2;
            else return max(left, right) +1;
            
        
    }
    
    bool isBalanced(TreeNode* root) {
        if (!root) return true;
        return height(root) != -2;
        
        
        
    }
};

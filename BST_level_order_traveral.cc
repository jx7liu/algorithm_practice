struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode(int x) : val(x), left(NULL), right(NULL) {}
  };
 
class Solution {
public:

    void helper (vector<vector <int>>&r, int d, TreeNode* root) {
        if (!root) return;
        if (r.size() == d) { r.push_back( vector<int>()); }
        r[d].push_back(root->val);
        helper(r, d+1, root->left);
        helper(r, d+1, root->right);
    }
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector <vector<int>> r;
        helper(r, 0, root);
        reverse(r.begin(), r.end());
        return r;
    }
};

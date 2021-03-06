using namespace std;

struct TreeNode {
     int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 };
 
class Solution {
public:
    void helper (vector<vector <int>>& r, int depth, TreeNode *root) {
        if (!root) return;
        if (r.size() == depth) r.push_back(vector<int>());
        r[depth].push_back(root->val);
        helper(r, depth + 1, root->left);
        helper (r, depth + 1, root->right);
    }
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector <vector <int>> r;
        helper (r, 0, root);
        reverse(r.begin(), r.end());
        return r;
    }
};

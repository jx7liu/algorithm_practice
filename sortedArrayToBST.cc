struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode(int x) : val(x), left(NULL), right(NULL) {}
  };
 
class Solution {
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int l = nums.size();
        if (!l) return NULL;
        if (l==1) return new TreeNode(nums[0]);
        int middle = l/2;
        TreeNode *t = new TreeNode(nums[middle]);
        vector <int> left(nums.begin(), nums.begin() + middle);
        vector <int> right(nums.begin() + middle + 1, nums.end());
        t->left = sortedArrayToBST(left);
        t->right = sortedArrayToBST(right);
        return t;
        
    }
};

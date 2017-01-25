using namespace std;

struct TreeNode {
 	    int val;
	   TreeNode *left;
 	    TreeNode *right;
	     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 	};
 
class Solution {
public:
    void flatten(TreeNode* root) {
        while (root){
            if (root->right && root->left){
                TreeNode * l = root->left;
                while (l->right) l = l->right;
                l->right = root->right;
            }
            if (root->left){
                root->right = root->left;
                root->left = NULL;
            
            }
            root = root->right;
        }
        
    }
};

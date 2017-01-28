#include <iostream>
using namespace std;

struct TreeNode {
	int val;
	TreeNode *left;
	treeNode *right;
	TreeNode(int x): val(x), left(NULL), right(NULL) {}

};


class solution {

private:
	int helper (TreeNode *t, int k, int &i, int &sum) {
		if (root == NULL || i >=k) return;

		helper(t->right, k, i, sum);
		sum += t->val;
		i++;
		if (i==k) {
			return sum;
		}
		helper(t->left, k, i, sum);	
		
	}

public:
	int kthLargestSum (TreeNode *t, int k) {
		int i = 0;
		int sum = 0;
		return helper(t, k, i, sum);

	}

}

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
	vector<int> ans;
	void walk(TreeNode* root) {
		if (root == nullptr) return;
		if (root->left == nullptr && root->right == nullptr) {
			ans.push_back(root->val);
			return;
		}
		if (root->left != nullptr) walk(root->left);
		ans.push_back(root->val);
		if (root->right != nullptr) walk(root->right);
	}
	vector<int> inorderTraversal(TreeNode* root) {
		if (root == nullptr) return ans;
		walk(root);
		return ans;
	}
	// Time Complexity:- O(E), where E is the number of edges in the tree
	// Space Complexity:- O(V), where V is the number of nodes in the tree
};
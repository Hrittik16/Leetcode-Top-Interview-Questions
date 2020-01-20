/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    void dfs(TreeNode* root, vector<int>& dist, int level) {
        if(root == NULL)
            return;
        dist[level] = dist[level-1]+1;
        dfs(root->left, dist, level+1);
        dfs(root->right, dist, level+1);
    }
    int maxDepth(TreeNode* root) {
        if(root == NULL)
            return 0;
        vector<int> dist(1e5, 0);
        dfs(root, dist, 1);
        int mx = 0;
        for(int i = 0; i < 1e5; i++)
            mx = max(mx, dist[i]);
        return mx;
    }
};
/*
Given a binary tree, return all root-to-leaf paths.
Note: A leaf is a node with no children.

Example:
Input:

   1
 /   \
2     3
 \
  5

Output: ["1->2->5", "1->3"]
Explanation: All root-to-leaf paths are: 1->2->5, 1->3
*/

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
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> ret;
        
        if (!root) return ret;
        
        queue<pair<TreeNode*, string> > q;
        q.push(make_pair(root, to_string(root->val)));
        
        while (!q.empty()) {
            pair<TreeNode*, string> current = q.front();
            q.pop();
            TreeNode* node = current.first;
            string currstr = current.second;
            
            if (!node->left && !node->right){
                ret.push_back(currstr);
            }
            
            if (node->left) {
                q.push(make_pair(node->left, currstr+"->"+to_string(node->left->val)));
            }
            if (node->right) {
                q.push(make_pair(node->right, currstr+"->"+to_string(node->right->val)));
            }
        }
        
        return ret;
    }
};
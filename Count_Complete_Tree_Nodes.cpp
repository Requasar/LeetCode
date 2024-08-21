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
    int counT(TreeNode* root, int& num) {
        if (root == nullptr) 
            return 0;
        num++;
        counT(root->left, num);
        counT(root->right, num);
        return num;
    }
    int countNodes(TreeNode* root) {
        int num = 0;
        counT(root, num);
        return num;
    }
};

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
    int minDepth(TreeNode* root) {
        if(root == nullptr)
            return 0;
        if(root -> left == nullptr && root -> right == nullptr)
            return 1;
        
        int length=INT_MAX;

        if(root -> left){
            length = min(minDepth(root -> left), length);
        }

        if(root -> right){
            length = min(minDepth(root -> right), length);
        }

        return length+1;
    }
};

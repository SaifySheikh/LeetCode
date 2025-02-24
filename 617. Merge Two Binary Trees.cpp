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
    private:
    void dfs(TreeNode* node1,TreeNode* node2){
        node1->val+=node2->val;
        if(node2->left!=NULL){
            if(node1->left!=NULL){
                dfs(node1->left,node2->left);
            }else{
                node1->left=node2->left;
            }
        }

        if(node2->right!=NULL){
            if(node1->right!=NULL){
                dfs(node1->right,node2->right);
            }else{
                node1->right=node2->right;
            }
        }
    }
public:
    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
        if(root1==NULL && root2==NULL) return root1;
        if(root1==NULL) return root2;
        if(root2==NULL) return root1;

        dfs(root1,root2);
        return root1;
    }
};
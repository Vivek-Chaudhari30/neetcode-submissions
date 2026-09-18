class Solution {
public:
    int diameterOfBinaryTree(TreeNode* root) {
        int diameter = 0 ;
        height(root , diameter);        
        return diameter;
    }
private:
    int height(TreeNode* node , int& dia){
        if(node == NULL){
            return NULL;
        }
        int lh = height(node->left , dia);
        int rh = height(node->right , dia);

        dia = max(dia , lh + rh);

        return 1 + max(lh ,rh);
    }
};

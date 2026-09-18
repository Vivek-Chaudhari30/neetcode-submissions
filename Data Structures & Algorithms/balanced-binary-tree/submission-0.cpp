
class Solution {
public:
    bool isBalanced(TreeNode* root) {
        return height(root) != -1;

        

    }
private:
    int height(TreeNode* node){
        if(node == NULL){
            return 0;
        }

        int lh = height(node->left);
        if(lh == -1){
            return -1;
        }

        int rh = height(node->right);
        if(rh == -1){
            return -1;
        }
        
        if(abs(rh - lh) > 1){
            return -1;
        }

        return 1 + max(lh , rh);
    }
};

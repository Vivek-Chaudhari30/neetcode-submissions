
class Solution {
public:
    int maxDepth(TreeNode* root) {
        //we will use recursion
        // when do we need to stop
        if(root == NULL){
            return 0;
        }
        int lh = maxDepth(root->left);
        int rh = maxDepth(root->right); 

        return (1 + max( lh , rh));
    }
};

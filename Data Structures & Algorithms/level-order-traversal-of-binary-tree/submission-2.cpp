
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int> >ans;
        if(root == NULL){
            return ans;
        }        
        queue<TreeNode*> qt;
        qt.push(root);

        while(!qt.empty()){
            int n = qt.size();
            vector<int> level;
            while( n > 0){
                TreeNode* temp = qt.front();
                
                qt.pop();
                if(temp->left != NULL){
                    qt.push(temp->left);
                }
                if(temp->right != NULL){
                    qt.push(temp->right);
                }
                level.push_back(temp->val);
                n--;
            }
            ans.push_back(level);
        }
        return ans;
    }
};

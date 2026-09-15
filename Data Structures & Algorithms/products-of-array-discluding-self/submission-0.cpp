class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> leftarr(n ,1);
        vector<int> rightarr(n ,1);
        for(int i = 1; i < n ; i++){
            leftarr[i] = leftarr[i - 1] * nums[i - 1];
        }
        for(int i = n - 2; i >= 0 ; i--){
            rightarr[i] = rightarr[ i + 1] * nums[i + 1];
        }
        vector<int> ans;
        for(int i = 0; i < n ; i++){
            int temp = leftarr[i] * rightarr[i];
            ans.push_back(temp);
        }

        return ans;
    }
};

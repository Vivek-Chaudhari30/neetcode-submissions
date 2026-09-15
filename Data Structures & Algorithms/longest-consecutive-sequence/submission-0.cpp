class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        // although it states to use O(n)
        // for brute force we will implement sort
        if(nums.size() == 0){
            return 0;
        }
        int currentlength = 1 ; 
        int maxlength = 1;
        sort(nums.begin() , nums.end());
        for(int i = 1 ; i < nums.size() ; i++){
            if(nums[i] != nums[i-1]){
                if(nums[i] == nums[i -1] + 1){
                    currentlength++;
                }
                else{
                    maxlength = max(currentlength , maxlength);
                    currentlength = 1;
                }
            }
        }
        maxlength = max(currentlength , maxlength);
        return maxlength;
    }
};

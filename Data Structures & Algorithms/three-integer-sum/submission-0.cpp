class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        // first of all sort it 
        sort(nums.begin() , nums.end());
        // then run a loop..
        vector<vector<int>> ans;
        for(int i = 0 ; i < nums.size() - 2 ;  i++){
            // here instead of left and right we will right j and k
            if (i > 0 && nums[i] == nums[i - 1]) {
                continue;
            }
            int j = i+1;
            int k = nums.size() - 1;
            // if (i > 0 && nums[i] == nums[i - 1]) {
            //     continue;
            // }
            
            while(j < k){
                
                if((nums[i] + nums[j] + nums[k] ) > 0){
                    k--;
                }
                else if((nums[i] + nums[j] + nums[k] ) < 0){
                    j++;
                }
                else{
                    vector<int> temp;
                    temp.push_back(nums[i]);
                    temp.push_back(nums[j]);
                    temp.push_back(nums[k]);
                    ans.push_back(temp);
                    j++;
                    k--;
                    while(j < k && (nums[j] == nums[j- 1])){
                        j++;
                    }
                    while(j < k && (nums[k] == nums[k+ 1])){
                        k--;
                    }
                }
            }

        }

        return ans;

    }
};
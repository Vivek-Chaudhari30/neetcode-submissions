class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // Brute force would be to use 2 for loops and return the answer
        // Brute force would be O of N square
        vector<int> ans;
        unordered_map<int , int > mp;
        for(int i = 0 ;  i < nums.size() ; i++){
            if(mp.find(nums[i]) != mp.end()){
                // answer would be here;
                ans.push_back(mp[nums[i]]);
                ans.push_back(i);
                break;
            }
            int k = target - nums[i];
            mp[k] = i;
        }

        return ans;
    }
};

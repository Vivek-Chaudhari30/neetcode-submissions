class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // Hash Map
        // insertion and lookup itme of a hashmap is 01
        unordered_map<int , int> indices;
        for(int i = 0 ; i < nums.size() ;i++)
        {
            indices[nums[i]] = i;
        }
        // made the hashmap
        // now iterate
        for(int i = 0 ; i< nums.size() ; i++)
        {
            int diff = target - nums[i];
            if(indices.count(diff) && indices[diff] != i) // this is the important line
            {
                return {i , indices[diff]};
            }
        }

        return{};
        
    }
};

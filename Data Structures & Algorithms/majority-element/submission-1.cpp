class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // simple logic for this 
        // make a hash map
        
        unordered_map<int , int> indices;
        for( int i = 0 ; i < nums.size() ; i++)
        {
            indices[nums[i]]++;
        }
        // now find the max element (value )
        int max = ((nums.size()+1) /2);
        for(auto [key, value]: indices)
        {
            if(value >= max)
            {
                return key;
            }
        }
        

    }
};
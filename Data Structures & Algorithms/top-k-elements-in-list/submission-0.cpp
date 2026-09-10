class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        // create hash map and search for values greater than k
        unordered_map<int,int> indices;
        for(auto it: nums)
        {
            indices[it]++;
        }
        // filled all the values of hash map
        // now search
        vector<int> ans;
        for(auto [key, value] : indices)
        {
            if(value >= k)
            {
                ans.push_back(key);
            }
        }

        return ans;
    }
};

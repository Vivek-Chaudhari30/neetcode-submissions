class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int , int>mp;
        for(int i = 0 ; i < nums.size() ; i++){
            mp[nums[i]]++;
        }
        // the first part is done 
        // now we need to sort the second element of the hash map
        vector<pair<int , int>> pr;
        for(auto& it : mp){
            pr.push_back(it);
        }
        sort(pr.begin() , pr.end() , [](auto a , auto b){
            return a.second > b.second;
        });

        vector<int> ans;
        for(int i = 0 ; i < k ; i++){
            ans.push_back(pr[i].first);
        }

        return ans;
    }
};

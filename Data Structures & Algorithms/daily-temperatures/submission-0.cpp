class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> ans(temperatures.size() , 0);
        stack<pair<int,int>> st; // temp and its index;
        for(int i = 0 ; i < temperatures.size() ; i++){
            int t = temperatures[i];
            while(!st.empty() && t > st.top().first){
                auto pr = st.top();
                st.pop();
                ans[pr.second] = i - pr.second;
            }

            st.push({t,i});
        }

        return ans;
    }
};

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left = 0 ;
        int maxl = 0 ; 
        unordered_map<char , int> mp;
        for(int right = 0 ;  right < s.size() ; right++){
            if(mp.find(s[right]) != mp.end() &&(mp[s[right]] >= left)){
                left = mp[s[right]] + 1;
            }

            mp[s[right]] = right;
            int length = right - left + 1;
            maxl = max(maxl , length);

        }

        return maxl;
    }
};

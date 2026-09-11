class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length())
        {
            return 0;
        }
        unordered_map<char , int> mps;
        unordered_map<char , int> mpt;
        for(int i = 0 ; i < s.length() ; i++ ){
            mps[s[i]]++;
            mpt[t[i]]++;
        }
        if(mps == mpt){
            return 1;
        }

        return 0;
    }
};

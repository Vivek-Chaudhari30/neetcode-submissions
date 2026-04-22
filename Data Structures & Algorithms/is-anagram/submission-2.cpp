class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length())
        {
            return false;
        }
        unordered_map<char , int> siya;
        unordered_map<char , int> tiya;
        for(int i =0 ; i < s.size() ; i++)
        {
            siya[s[i]]++;
            tiya[t[i]]++;
        }

        return siya ==tiya;

        

    }
};

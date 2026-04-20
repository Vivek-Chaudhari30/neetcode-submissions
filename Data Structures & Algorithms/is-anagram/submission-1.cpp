class Solution {
public:
    bool isAnagram(string s, string t) {
        // the first approach is that what if we sort both the string sand then comapare them
        if(s.length() != t.length())
        {
            return false;
        }
        sort(s.begin() , s.end());
        sort(t.begin() , t.end());

        return s == t;
        

    }
};

class Solution {
public:
    bool isPalindrome(string s) {
        if(s.size() == 0){
            return true;
        }
        // remove other things than alphanumeric
        string dup = "";
        for(char c : s){
            if(isalnum(c)){
                dup.push_back(tolower(c));
            }
        }
        // now we have alphanumeric string
        if(dup.size() == 0){
            return true;
        }
        // now check the first and the last;
        int n = dup.size();
        int right = n - 1;
        int left = 0;
        n = n/2;
        while(n >= 0){
            if(dup[left] != dup[right]){
                return false;
            }
            left++;
            right--;
            n--;
        }

        return true;
    }
};

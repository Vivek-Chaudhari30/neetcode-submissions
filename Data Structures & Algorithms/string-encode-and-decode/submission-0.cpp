class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded_string;
        for(auto s : strs){
            encoded_string.append(to_string(s.size()));
            encoded_string.push_back('#');
            encoded_string.append(s);
        }

        return encoded_string;
    }

    vector<string> decode(string s) {
        vector<string> ans;
        int i = 0 ;
        while( i < s.size()){
            int j = i ;
            while(s[j] != '#'){
                j++;
            }
            int length = stoi(s.substr(i , j - i));
            i = j + 1;
            string temp;
            while(length > 0){
                temp.push_back(s[i]);
                i++;
                length--;
            }
            ans.push_back(temp);
        }

        return ans;

    }
};

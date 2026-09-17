class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int hasha[26] = {0};
        int hashb[26] = {0};
        int n = s1.length();
        int m = s2.length();
        if(n > m){
            return false;
        }
        for(int i = 0 ; i < n ; i++){
            hasha[s1[i] - 'a']++;
            hashb[s2[i] - 'a']++;
        }
        for(int i = 0 ; i <= m - n ; i++){
            int j;
            for( j = 0 ; j < 26 ; j++){
                if(hasha[j] != hashb[j]){
                    break;
                }
            }
            if(j == 26){
                    return true;
            }
            if( i + n < m){
                hashb[s2[i] - 'a']--;
                hashb[s2[i + n] - 'a']++;
            }
        }

        return false;

    }
};

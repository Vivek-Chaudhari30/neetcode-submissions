class Solution {
public:
    long long totalhours(vector<int>& piles , int mid){
        long long total = 0;
        for(int i = 0 ;  i < piles.size() ; i++){
            total += ceil((double)piles[i] / mid);
        }
        return total;
    }


    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = *max_element(piles.begin() , piles.end());
        while(low <= high){
            int mid = (high + low)/2;
            if(totalhours(piles , mid) > h){
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
        }

        return low;
    }
};

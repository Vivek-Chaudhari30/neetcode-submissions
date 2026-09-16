class Solution {
public:
    int maxArea(vector<int>& heights) {
        int maxaa = 0 ;
        int left = 0 ; 
        int right = heights.size() - 1;
        while(left < right){
            int area ;
            if(heights[left] <= heights[right]){
                area = heights[left]*(right - left);
                maxaa = max(area , maxaa);
                left++;
            }
            else{
                area = heights[right]*(right - left);
                maxaa = max(area , maxaa);
                right--;
            }
        }

        return maxaa;
    }
};

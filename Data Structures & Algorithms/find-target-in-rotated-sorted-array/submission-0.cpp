class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low = 0; 
        int right = nums.size() -1 ;
        while(low <= right){
            int mid = (low + right)/2;
            if(nums[mid] == target){
                return mid;
            }
            else if(nums[low] <= nums[mid]){
                if(nums[mid] < target || nums[low] > target){
                    low = mid + 1;
                }
                else{
                    right = mid - 1;
                }
            }
            // now right sorted;
            else{
                if(nums[mid] > target || nums[right] < target){
                    right = mid - 1;
                }
                else{
                    low = mid + 1;
                }
            }
        } 
        return -1;
    }
};

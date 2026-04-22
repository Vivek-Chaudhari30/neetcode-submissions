class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        // All tasks
        // First we need to remove the val from all the positions
        // later on we need to move all occurences forward
        // and the order doesnot maater
        // BRUTE FORCE
        int k = nums.size();
        for(int i = 0 ; i< nums.size() ; i++)
        {
            if(nums[i] == val)
            {
                k--;
                nums[i] = 100;
            }
        }

        sort(nums.begin() ,nums.end());





        return k;
    }
};
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // Boyer- Moore Voting Algorithm
        int alpha , count;
        count = 0 ;
        alpha = nums[0];
        for(auto it: nums)
        {
            if(alpha == it)
            {
                count++;
            }
            else
            {// alpha != nums condition will be here
                if(count == 0)
                {
                    alpha = it;
                    
                }
                else
                {
                    count--;
                }
                
            }
        }

        return alpha;
    }
};
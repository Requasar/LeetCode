class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int low=0, mid, high = nums.size();
        if(target > nums[high-1]) // first condition if target higher than all;
        {
            return high;
        }
        //search loop by division;
        while(low <= high)
        {
            mid = (low + high)/2;
            if( nums[mid] == target) //if our value equal to middle one we found our location;
                return mid;
        

            if(target < nums[mid]) // If targer less then middle point our location should be at the left part so
            {
                high = mid-1;      // we are changing our searc ares ending point to 1 left of middle point;
            }
            else                   // If it is greater, we should check right side so begining should be mid point+1;
            {
                low = mid+1;
            }
        }
        return low;
    }
};

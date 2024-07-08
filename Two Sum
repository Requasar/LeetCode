class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i = 0, x = 1, stop =1;
        int size = nums.size();
        while (stop) {
            if (x == size) {
                i++;
                x = 0;
                if(i == size)
                    return{};
            }
            else {
                if(nums[i] + nums[x] == target){
                    return {i,x};
                    stop =0;
                }
                else
                    x++;
                    if(x == i)
                        x++;
            }
        }
        return{};
    }
};

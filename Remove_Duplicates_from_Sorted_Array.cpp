class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
    int k = 1;
    size_t size = nums.size();
    if(size == 0)
        return 0;


    for (int i = 0; i < size-1; i++)
    {
        if (nums[i] == nums[i + 1])
        {
            for (int j = i; j < size-1; j++)
            {
                nums[j] = nums[j + 1];
            }
            size--;
            i --;
        }
        else
            k++;
    }
    return k;
    }
};

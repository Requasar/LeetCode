class Solution {
public:
    int majorityElement(vector<int>& nums) {
        /*
        size_t size = nums.size(); //via using hashtable

        unordered_map<int,int> freq;

        for(int i =0; i<size; i++)
        {
            freq[nums[i]]++; 
        }
        
        int size1 = size/2;
        for(auto a: freq)
        {
            if(a.second > size1)
                return a.first;
        }
        return 0; */

        sort(nums.begin(), nums.end()); //logical solution
        int size = nums.size();
        return nums[size/2];
    }
};

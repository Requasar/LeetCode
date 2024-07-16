class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        int ch =0, temp =0; //temp for swaping values ch for traversing in nums2;

        for(int i = 0; i < m + n; i++)
        {
            if(ch < n && (i >= m + ch || nums1[i] > nums2[ch]))
            {
                for(int j = m + ch; j > i ; j--)
                {
                    nums1[j] = nums1[j-1];
                }
                nums1[i] = nums2[ch];
                ch++;

            }

        }
    }
};

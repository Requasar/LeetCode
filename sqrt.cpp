class Solution {
public:
    int mySqrt(int x) {
        /*
        long long result =0;
        for(long long i=0; i*i <= x;i++)
        {
            result=i;
        }
        return result;
        */

        int start=0;
        int end=x;
        long long int mid = start + (end - start)/2;
        int ans = -1;

        while(start <= end)
        {
            if(mid * mid == x)
                return mid;
            else if(mid *mid < x)
            {
                ans = mid;
                start = mid+1;
            }
            else if(mid * mid > x)
            {
                end = mid -1;
            }
            mid = start +(end - start)/2;
        }
        return ans;
    }
};

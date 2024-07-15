class Solution {
public:
    int mySqrt(int x) {
        long long result =0;
        for(long long i=0; i*i <= x;i++)
        {
            result=i;
        }
        return result;
    }
};

class Solution {
public:
    int titleToNumber(string columnTitle) {
        size_t size = columnTitle.size();
        long long int a =0, b=1, result =0;

        for(int i = size-1; i >= 0; i--)
        {
            a = static_cast<int>(columnTitle[i]) - 64; //static_cast to convert string to int to use ascii 
            result = result  + a * b ; // converting the 26-base system to a 10-base system 
            b = b*26;
        }
        return result;
    }
};

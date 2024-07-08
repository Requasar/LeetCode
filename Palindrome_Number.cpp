class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0)
            return false;
        long int rev=0, temp = x;
        while(temp != 0)
        {
            long int a = temp % 10;
            rev = rev * 10 + a;
            temp = temp/10; 
        }
        if( rev == x)
            return 1;
        else
            return 0;
    }
};

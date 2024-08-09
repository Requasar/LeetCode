class Solution {
public:
    int numbers(int n){
        int numb =0;
        while(n != 0)
        {
            int num = n%10; //right most digit
            numb += num*num;
            n /= 10; // going left digit
        }
        return numb;
    }

    bool isHappy(int n) {
        int ptrL = n;
        int ptrR = numbers(n);
        while(ptrR != 1 && ptrR != ptrL){
            ptrL = numbers(ptrL);
            ptrR = numbers(numbers(ptrR));
        }
        return ptrR==1;

    }
};

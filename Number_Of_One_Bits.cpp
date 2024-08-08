class Solution {
public:
    int hammingWeight(int n) {
        vector<int> bin;
        int count =0;
        int i=0;
        while (n > 0) {     //Loop to convert decimal to binary
            bin.push_back(n % 2);
            n = n / 2;
            i++;
        }
        for(int a: bin){    //counting the number of 1's

            if(a == 1)
            {
                count++;
            }

        }
        return count;
    }
};

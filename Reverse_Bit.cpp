class Solution {
public:

    bool getBit(uint32_t bit, int pos) {
    return (bit >> pos) & 1;
    }
    uint32_t reverseBits(uint32_t n) {
        long int result = 0;
        bool bit;
        for(int pos = 0; pos < 32; pos++)
        {
            bit = getBit(n, pos);
            result |= (bit << (31 - pos));
        }
        return result;
    }
};

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int check = INT_MAX; //finding the lowest value
        int high = 0; //highest after we found our low value.
        int result;
        size_t size = prices.size();

        for(int i = 0; i < size ; i++)
        {  
            if(prices[i] < check )
            {
                check = prices[i];
                high = 0; // we can't sell what we didn't buy so we should reset our highest price value.
            }
            else
            {
                if(prices[i] > high)
                    high = prices[i];
            }
            if( high - check > result)
                result = high -check;
        }
        if(result > 0)
            return result;
        else 
            return 0;
    }
};

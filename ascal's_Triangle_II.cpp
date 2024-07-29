class Solution {
public:
    vector<int> getRow(int rowIndex) {
        
        vector<int> row(1, 1);
        long long prev = 1;
        for(int j = 1; j <= rowIndex; j++)
        {
            long long next_val = prev * (rowIndex - j + 1) / j;
            row.push_back(next_val);
            prev = next_val;
        }

        return row;
    }
};

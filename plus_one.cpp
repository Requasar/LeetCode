class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        
        size_t size = digits.size();
        
        for (int i = size - 1; i >= 0; i--) {
            if (digits[i] < 9) {
                digits[i]++;
                return digits;
            }
            digits[i] = 0;
        }

        digits.insert(digits.begin(), 1);
        return digits;
    }

};


/*
        int size = digits.size();
        
        // Convert vector to integer
        int number = 0;
        for (int i = 0; i < size; i++) {
            number = number * 10 + digits[i];
        }
        
        // Increment the integer by 1
        number++;
        
        // Convert integer back to vector of digits
        std::vector<int> result;
        while (number > 0) {
            int digit = number % 10;
            result.push_back(digit);
            number /= 10;
        }
        
        // Reverse the vector to get the correct order
        std::reverse(result.begin(), result.end());
        
        return result;
    }
*/

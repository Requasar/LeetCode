class Solution {
public:
    string addBinary(string a, string b) {
        string result;
        int size_a = a.size() - 1, size_b = b.size() - 1; // Initialize indices correctly
        int carry = 0;

        while (size_a >= 0 || size_b >= 0 || carry > 0) {
            int sum = carry;
            if (size_a >= 0)
                sum += a[size_a--] - '0'; // Convert character to integer
            if (size_b >= 0)
                sum += b[size_b--] - '0'; // Convert character to integer
            result += (sum % 2) + '0'; // Append '0' or '1' to result
            carry = sum / 2; // Update carry
        }
        reverse(result.begin(), result.end());

        return result;
    }
};

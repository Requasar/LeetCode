int charToInt(char c) {
    switch (c) {
    case 'I': return 1;
    case 'V': return 5;
    case 'X': return 10;
    case 'L': return 50;
    case 'C': return 100;
    case 'D': return 500;
    case 'M': return 1000;
    default: return 0; // Handle unknown characters
    }
}

class Solution {
public:
    int romanToInt(string s) {

    size_t size = s.size();
    int result = 0;

    for (int i = 0; i <= size - 1; i++ )
    {
        if (charToInt(s[i]) < charToInt(s[i + 1])){
            result = result + (charToInt(s[i + 1]) - charToInt(s[i]));
            i++;
        }
        else 
        {
            result += charToInt(s[i]);
        }
    }

    return result;

        
    }
};

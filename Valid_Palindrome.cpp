class Solution {
public:
    bool isPalindrome(string s) {
        if(s == " ")
            return true;
        size_t size = s.size();
        string str ="";
        int ascii;

        for(int i = 0; i < size; i++) // With this loop we convert our string "Race, a car" to "raceacar" and we add character by character into new str string.
        {
            ascii = static_cast<int>(s[i]);
            if(ascii >= 97 && ascii <= 122) //ASCII values of lowercase letters if we have those we shuldn't change anything and we directly add that lettor to our new string str
            {
                str.push_back(s[i]);
                continue;
            }
            else if(ascii >= 65 && ascii <= 90) // ASCII values of uppercase letters, if we have those we should add 32 to their int values to conver them lowercase
            {
                ascii+= 32;
                s[i] = static_cast<char>(ascii);
                str.push_back(s[i]);
                continue;
            }
            else if(ascii >=48 && ascii <= 57)
            {
                str.push_back(s[i]);
                continue;
            }
            else
            {
                continue;
            }
        }
        size_t sizeOfP = str.size();
        for(int i = 0; i< sizeOfP/2; i++) // Loop to check if converted string is palindrome or not.
        {
            if(str[i] == str[(sizeOfP-1)-i])
                continue;
            else
                return false;
        }
        return true;
    }
};

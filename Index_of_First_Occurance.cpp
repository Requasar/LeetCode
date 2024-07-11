class Solution {
public:
    int strStr(string haystack, string needle) {
    int ch = 0,temp; //temp is a pointer to point starting point of matching with needle
    for (int i = 0; i < haystack.size(); i++)
    {
        if (haystack[i] == needle[ch])
        {
            ch++;
            if (ch == needle.size())
            {
                temp = (i + 1) - needle.size();
                return temp;
            }
        }
        else
        {
            i = i-ch;
            ch =0;
        }
    }
        return -1;
    }
};

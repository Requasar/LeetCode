class Solution {
public:
    int lengthOfLastWord(string s) {

        int size = s.size();
        int count=0;
        int check=size -1;

        while(s[check] == ' ' && check > 0)
        {
            check--;  
        }

        for(check; check >= 0 && s[check]!=' '; check--)
        {
            count++;
        }
     return count;       
    }

};

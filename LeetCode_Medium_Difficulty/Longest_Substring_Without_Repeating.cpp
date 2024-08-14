class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> charIndexMap;  // hash sol
        int maxL = 0;
        int start = 0;
        size_t size = s.size();
        for (int i = 0; i < size; i++) {
            if (charIndexMap.find(s[i]) != charIndexMap.end()) {
                start = max(start, charIndexMap[s[i]] + 1);
            }
            charIndexMap[s[i]] = i; 
            maxL = max(maxL, i - start + 1);  
        }

        return maxL;
    }
};

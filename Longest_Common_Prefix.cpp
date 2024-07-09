class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        string result = strs[0]; 
        string out = ""; 
        
        for (size_t i = 1; i < strs.size(); ++i) {
            for (size_t j = 0; j < strs[i].size(); ++j) {
                if (result[j] != strs[i][j]) {
                    break; 
                }
                out += result[j]; 
            }
            result = out; 
            out = ""; 
        }
        
        return result;

    }
};

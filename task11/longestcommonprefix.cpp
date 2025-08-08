class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty()) return "";
        string longestPrefix = "";

        for(int i = 0; i < strs[0].length(); i++){
            char current = strs[0][i];
            for(int j = 1; j < strs.size(); j++){
                if(i > strs[j].size() || strs[j][i] != current){
                    return longestPrefix;
                }
            }
            longestPrefix += current;
        }
        return longestPrefix;
    }
};

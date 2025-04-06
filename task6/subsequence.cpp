class Solution {
public:
    bool isSubsequence(string s, string t) {
        int k = 0;
        int t_len = t.length();
        int s_len = s.length();
        string subseq = "";
        for(int i = 0; i < t_len; i++){
            if(k < s_len && t[i] == s[k]){
                subseq += t[i];
                k++;
            }
        }
        
        return subseq == s;
    }
};

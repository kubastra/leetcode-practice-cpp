class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        unordered_map<char, int> mapa = {
            {'(', ')'},
            {'{', '}'},
            {'[', ']'}
        };

        for(char letter : s){
            if(mapa.find(letter) != mapa.end()){
                st.push(letter);
            }else{
                if(st.empty() || mapa[st.top()] != letter){
                    return false;
                }
                st.pop();
            }
        }
        return st.empty();
    }
};

class Solution {
public:
    bool isPalindrome(string s) {
        
        string n = "";
        for(int i = 0; i < s.length(); i++){
            if((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= '0' && s[i] <='9')){
                n += s[i];
            }else if(s[i] >= 'A' && s[i] <= 'Z'){
                n += static_cast<char>(s[i] + 32);
            }
        }

        if(n.length() == 1) return true;
        
        string n1 = n;
        int left = 0;
        int right = n.length() - 1;
        
        while(left < right){
            swap (n[left], n[right]);
            left++;
            right--;
        }
        
        return n1 == n;
    }
};

class Solution {
public:
    string breakPalindrome(string str){
        int len = str.size(), end = len / 2;
        for (int i = 0; i < len/2; i++){
            if(str[i] != 'a'){
                str[i] = 'a';
                return str;
            }
        }
        if(len > 1){
            str[len - 1] = 'b';
            return str;
        }
        return "";
    }
};
class Solution {
public:
    bool isPalindrome(string s){
        int j = s.length()-1, i = 0;
        while(i < j){
            if(s[i++] != s[j--]) return false;
        }
        return true;
    }
    
    string firstPalindrome(vector<string>& words) {
        for (const string& word : words) {
            if(isPalindrome(word)) return word;
        }
        return "";
    }
};
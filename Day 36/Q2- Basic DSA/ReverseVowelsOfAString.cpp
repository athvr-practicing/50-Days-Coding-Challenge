class Solution {
public:
    bool isvowel(char c) {
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'
            || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U';
    }

    string reverseVowels(string s) {
        int i = 0, j = (int)s.size()-1;
        
        while(i < j) {
            if(!isvowel(s[i])) i++;
            if(!isvowel(s[j])) j--;

            if(isvowel(s[i]) && isvowel(s[j])) {
                char tmp = s[i];
                s[i] = s[j];
                s[j] = tmp;
                i++;
                j--;
            }
        }

        return s;
    }
};
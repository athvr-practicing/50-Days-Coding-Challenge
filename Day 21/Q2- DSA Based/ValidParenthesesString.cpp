class Solution {
public:
    bool checkValidString(string s) {
        int n = (int)s.length();
        int cl = 0;
        for(int i=0; i<n; ++i){
            if(s[i] == '(' || s[i] == '*') ++cl;
            else --cl;
            if(cl < 0) return false;
        }
        int cr = 0;
        for(int i=n-1; i>=0; --i){
            if(s[i] == ')' || s[i] == '*') ++cr;
            else --cr;
            if(cr < 0) return false;
        }
        return true;
    }
};
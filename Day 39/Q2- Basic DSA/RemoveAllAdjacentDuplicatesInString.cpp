class Solution {
public:
    string removeDuplicates(string s) {
        string a;
        a.push_back(s[0]);
        for(int i=1;i<s.size();i++){
            if(!a.empty() && a.back()==s[i]) a.pop_back();
            else a.push_back(s[i]);}
        return a;
    }
};
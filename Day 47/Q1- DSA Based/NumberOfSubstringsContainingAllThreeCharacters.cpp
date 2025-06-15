class Solution {
    bool check(char ch){
        return (ch=='a' || ch=='b' || ch=='c');
    }
public:
    int numberOfSubstrings(string s) {
        long long c=0;
        unordered_map<char,int>res;
        
        int n=s.size();
        int l=0;
        for (int r=0;r<n;++r){
            if (check(s[r])){
                res[s[r]]++;
            }
            while(res.size()==3){
                c+=n-r;
                if (check(s[l])){
                    res[s[l]]--;
                } if (res[s[l]]==0){
                    res.erase(s[l]);
                }
                l++;
            }
        }
        return c;

    }
};
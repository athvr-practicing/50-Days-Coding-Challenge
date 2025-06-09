class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        string ans="",start=strs[0],finish=strs[strs.size()-1];
        for (int i=0;i<start.size();i++){
            if(start[i]!=finish[i]){
                return ans;
            }
            else{
                ans+=start[i];
            }
        }
        return ans;
    }
};
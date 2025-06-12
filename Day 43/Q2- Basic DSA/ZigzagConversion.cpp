class Solution {
public:
    string convert(string s, int numRows) {
        int n = s.size();
        if(n <= numRows || numRows == 1) return s;
        string ans;
        for(int i=0; i<numRows; i++){
            int p1=i;
            while((i == 0 || i == numRows - 1) && p1 < n){
                ans.push_back(s[p1]);
                p1 = p1 + 2*numRows - 2;
            }
            bool flag = true;
            int p2 = p1;
            int j = 1;
            while(i != 0 && i != numRows-1 && p1 < n){
                ans.push_back(s[p1]);
                if(flag){
                    p1 = p1 + 2*numRows - 2 - 2*i;
                    flag = false;
                }else{
                    p1 = p2 + 2*numRows - 2;
                    flag = true;
                    p2 = p1;
                    j++;
                }
            }
        }

        return ans;
    }
};
class Solution {
public:
    int calculate(string s) {
        stack<int> st;
        int ans =0, sign = 1, number = 0;

        for(auto &ch: s){
            if(isdigit(ch)){
                number = number*10 + (ch-'0');
            }
            else if(ch=='+'){
                ans += sign*number;
                number = 0;
                sign =1;
            }
            else if(ch=='-'){
                ans += sign*number;
                number =0;
                sign =-1;
            }
            else if(ch=='('){
                st.push(ans);
                st.push(sign);
                ans = 0;
                number = 0;
                sign = 1;
            }
            else if(ch==')'){
                ans += sign*number;
                number = 0;
                int topsign = st.top(); st.pop();
                ans*= topsign;
                ans +=st.top(); 
                st.pop();
            }
        }
        ans+=sign*number;
        return ans;
    }
};
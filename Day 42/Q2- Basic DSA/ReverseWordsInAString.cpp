class Solution {
public:
    string reverseWords(string s) {
        stack<string> st;
        string temp;

        string word;
        stringstream ss(s);
        

        while(getline(ss, word,' ')){
           if (!word.empty()) { 
                st.push(word);
            }
            
        }
        while(!st.empty()){
            temp += st.top();
            st.pop();
             if (!st.empty()) {
                temp += " ";  
            }
        }

        return temp;
    }
};
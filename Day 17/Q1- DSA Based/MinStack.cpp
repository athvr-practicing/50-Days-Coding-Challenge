#include <stack>
using namespace std;

class MinStack {
public:
    stack<int> st;
    stack<int> min;
    
    MinStack() {}

    void push(int val) {
        st.push(val);
        if (min.empty()) {
            min.push(val);
        } else {
            min.push(std::min(val, min.top()));
        }
    }

    void pop() {
        st.pop();
        min.pop();
    }

    int top() {
        return st.top();
    }

    int getMin() {
        return min.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
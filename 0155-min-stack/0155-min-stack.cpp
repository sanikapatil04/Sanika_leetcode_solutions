class MinStack {
public:
    stack<int> st;      // main stack
    stack<int> minSt;   // stack to track min values
    
    MinStack() {
        // no need to initialize explicitly
    }
    
    void push(int val) {
        st.push(val);
        // if min stack is empty or new val <= current min, push to min stack
        if (minSt.empty() || val <= minSt.top()) {
            minSt.push(val);
        }
    }
    
    void pop() {
        if (st.top() == minSt.top()) {
            minSt.pop();
        }
        st.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return minSt.top();
    }
};

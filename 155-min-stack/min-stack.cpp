class MinStack {
private:
    stack<int> mainStack; 
    stack<int> minStack;   

public:
    MinStack() {
     
    }
    
    void push(int val) {
  
        mainStack.push(val);
        
        if (minStack.empty() || val <= minStack.top()) {
            minStack.push(val);
        }
    }
    
    void pop() {
        if (!mainStack.empty() && mainStack.top() == minStack.top()) {
            minStack.pop();
        }
      
        mainStack.pop();
    }
    
    int top() {
        return mainStack.top();
    }
    
    int getMin() {
        return minStack.top();
    }
};

/**
 * Usage example:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */

class MyQueue {
public:
    stack<int> inputStack;
    stack<int> outputStack;
    
    MyQueue() {
        // Constructor: Initializes an empty queue.
    }
    
    void push(int x) {
        // Pushes element x to the back of the queue.
        inputStack.push(x);
    }
    
    int pop() {
        // Removes the element from the front of the queue and returns it.
        // Ensure the outputStack has the current front on top.
        moveInputToOutput();
        int front = outputStack.top();
        outputStack.pop();
        return front;
    }
    
    int peek() {
        // Returns the element at the front of the queue.
        // Ensure the outputStack has the current front on top.
        moveInputToOutput();
        return outputStack.top();
    }
    
    bool empty() {
        // Returns true if the queue is empty, false otherwise.
        return inputStack.empty() && outputStack.empty();
    }
    
private:
    void moveInputToOutput() {
        // Move elements from inputStack to outputStack if outputStack is empty.
        if (outputStack.empty()) {
            while (!inputStack.empty()) {
                outputStack.push(inputStack.top());
                inputStack.pop();
            }
        }
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */

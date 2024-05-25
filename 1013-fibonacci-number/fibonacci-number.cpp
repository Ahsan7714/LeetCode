class Solution {
public:
    int fib(int n) {
       return fibonacci(n);
    }

private:
    int fibonacci(int no) {
        // Base cases
        if (no == 0) {
            return 0;
        }
        if (no == 1) {
            return 1;
        }
        // Recursive case
        return fibonacci(no - 1) + fibonacci(no - 2);
    }
};

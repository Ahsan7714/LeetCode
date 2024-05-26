class Solution {
public:
    int sumOfMultiples(int n) {
        int sum = 0;
        for (int num = 1; num <= n; ++num) {
            if (num % 3 == 0 || num % 5 == 0 || num % 7 == 0) {
                sum += num;
            }
        }
        return sum;
        
    }
};
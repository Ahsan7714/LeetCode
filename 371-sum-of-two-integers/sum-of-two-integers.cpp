class Solution {
public:
    int getSum(int a, int b) {
        while (b != 0) {
            // Calculate the carry
            int carry = (a & b) << 1;
            // Calculate the sum without carry
            a = a ^ b;
            // Assign carry to b for the next iteration
            b = carry;
        }
        return a;
    }
};

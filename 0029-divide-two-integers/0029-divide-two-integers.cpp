class Solution {
public:
    int divide(int dividend, int divisor) {
        // Handle overflow case
        if (dividend == INT_MIN && divisor == -1) 
            return INT_MAX;
        
        // Determine the sign of the result
        bool negative = (dividend < 0) ^ (divisor < 0);
        
        // Use long long to handle abs(INT_MIN)
        long long a = labs(dividend);
        long long b = labs(divisor);
        long long res = 0;
        
        // Bitwise approach
        while (a >= b) {
            long long temp = b, multiple = 1;
            while (a >= (temp << 1)) {
                temp <<= 1;
                multiple <<= 1;
            }
            a -= temp;
            res += multiple;
        }
        
        // Apply sign
        if (negative) res = -res;
        
        // Clamp result to int range
        return (res > INT_MAX) ? INT_MAX : (int)res;
    }
};

class Solution {
public:
    bool isUgly(int n) {
        if (n <= 0) return false;

        // Divide by 2, 3, and 5 as long as possible
        while (n % 2 == 0) n /= 2;
        while (n % 3 == 0) n /= 3;
        while (n % 5 == 0) n /= 5;

        // If only these primes were factors, n should be 1 now
        return n == 1;
    }
};

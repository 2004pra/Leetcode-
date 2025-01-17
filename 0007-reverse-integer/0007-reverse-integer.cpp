class Solution {
public:
    int reverse(int x) {
         int result = 0;
        while (x != 0) {
            int digit = x % 10;  // Extract the last digit
            x /= 10;             // Remove the last digit
            
            // Check for overflow or underflow before updating result
            if (result > INT_MAX / 10 || (result == INT_MAX / 10 && digit > 7)) {
                return 0; // Overflow
            }
            if (result < INT_MIN / 10 || (result == INT_MIN / 10 && digit < -8)) {
                return 0; // Underflow
            }
            
            result = result * 10 + digit;
        }
        return result;
    }
};
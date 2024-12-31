class Solution {
public:
    int mySqrt(int x) {
        if (x == 0 || x == 1) {
        return x; // Square root of 0 and 1 is the number itself
    }
    
    int low = 0, high = x, result = 0;
    
    while (low <= high) {
        int mid = low + (high - low) / 2;
        
        // Check if mid*mid is equal to x
        if (mid <= x / mid) {
            result = mid;  // Store the potential answer
            low = mid + 1; // Look for a larger square root
        } else {
            high = mid - 1; // Look for a smaller square root
        }
    }
    
    return result;

    }
};
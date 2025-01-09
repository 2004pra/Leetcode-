class Solution {
public:
    bool isHappy(int n) {
         unordered_set<int> seen; // To track numbers we've already seen in the process
        
        while (n != 1) {
            if (seen.find(n) != seen.end()) {
                // If we see the same number again, we are in a cycle
                return false;
            }
            seen.insert(n);
            
            n = getSumOfSquares(n); // Replace n with the sum of squares of its digits
        }
        
        return true; // If we reach 1, it's a happy number
    }
    private:
    int getSumOfSquares(int num) {
        int sum = 0;
        while (num > 0) {
            int digit = num % 10;
            sum += digit * digit;
            num /= 10;
        }
        return sum;
    }
};
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
         for (int i = digits.size() - 1; i >= 0; --i) {
        // Add 1 to the current digit
        digits[i] += 1;
        // If the digit is less than 10, return the result
        if (digits[i] < 10) {
            return digits;
        }
        // Otherwise, set it to 0 and continue
        digits[i] = 0;
    }

    // If we are here, all digits were 9, so we need to add a leading 1
    digits.insert(digits.begin(), 1);
    return digits;
    }
};
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> charIndexMap; // To store the last index of each character
        int maxLength = 0; // To store the maximum length of substring
        int start = 0; // Sliding window start pointer
        
        for (int end = 0; end < s.length(); ++end) {
            if (charIndexMap.find(s[end]) != charIndexMap.end()) {
                // Move the start pointer to the right of the last occurrence of the current character
                start = max(start, charIndexMap[s[end]] + 1);
            }
            charIndexMap[s[end]] = end; // Update the last seen index of the character
            maxLength = max(maxLength, end - start + 1); // Calculate the max length
        }
        
        return maxLength;
    }
};
class Solution {
public:
    string longestPalindrome(string s) {
          int n = s.size();
    if (n == 0) return "";

    // Create a DP table to store palindromic substring information
    vector<vector<bool>> dp(n, vector<bool>(n, false));
    int maxLength = 1; // Length of the longest palindrome
    int start = 0;     // Start index of the longest palindrome

    // Single character substrings are palindromes
    for (int i = 0; i < n; ++i)
        dp[i][i] = true;

    // Check for substrings of length 2
    for (int i = 0; i < n - 1; ++i) {
        if (s[i] == s[i + 1]) {
            dp[i][i + 1] = true;
            start = i;
            maxLength = 2;
        }
    }

    // Check for substrings of length > 2
    for (int len = 3; len <= n; ++len) {
        for (int i = 0; i < n - len + 1; ++i) {
            int j = i + len - 1; // End index of the substring

            // Check if the current substring is a palindrome
            if (s[i] == s[j] && dp[i + 1][j - 1]) {
                dp[i][j] = true;
                start = i;
                maxLength = len;
            }
        }
    }

    // Return the longest palindromic substring
    return s.substr(start, maxLength);
    }
};
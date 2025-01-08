class Solution {
public:
    vector<int> getRow(int rowIndex) {
         vector<int> row(rowIndex + 1, 1); // Initialize the row with 1s
    
    for (int i = 1; i < rowIndex; ++i) {
        for (int j = i; j > 0; --j) {
            row[j] += row[j - 1]; // Update the current element based on the sum of two numbers above it
        }
    }
    
    return row;
    }
};
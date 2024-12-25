class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
          int k = 0; // Tracks the number of elements not equal to val
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] != val) {
            nums[k] = nums[i]; // Move the non-val element to the k-th position
            k++;
        }
    }
    return k;
    }
};
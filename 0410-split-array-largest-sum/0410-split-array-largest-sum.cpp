class Solution {
public:
int countStudents(vector<int> &nums, int pages) {
    int n = nums.size(); //size of array.
    int students = 1;
    long long pagesStudent = 0;
    for (int i = 0; i < n; i++) {
        if (pagesStudent + nums[i] <= pages) {
            //add pages to current student
            pagesStudent += nums[i];
        }
        else {
            //add pages to next student
            students++;
            pagesStudent =nums[i];
        }
    }
    return students;
}

int findPages(vector<int>& nums, int n, int m) {
    //book allocation impossible:
    if (m > n) return -1;

    int low = *max_element(nums.begin(), nums.end());
    int high = accumulate(nums.begin(), nums.end(), 0);
    while (low <= high) {
        int mid = (low + high) / 2;
        int students = countStudents(nums, mid);
        if (students > m) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    return low;
}
    int splitArray(vector<int>& nums, int k) {
        return findPages(nums,nums.size(),k);
    }
};
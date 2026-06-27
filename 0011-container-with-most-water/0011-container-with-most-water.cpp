class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int left =0;
        int right = height.size()-1;
        int maxArea = 0;
        while(left<right){
            int width = right - left;
            int mini = min(height[left],height[right]);
            maxArea= max(maxArea,width*mini);
            if(height[left]<height[right]){
                left++;
            }
            else{
                right--;
            }
        }
        return maxArea;
    }
};
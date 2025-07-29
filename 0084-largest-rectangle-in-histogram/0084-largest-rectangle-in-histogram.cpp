class Solution {
public:
vector<int> leftArr(vector<int>& heights){
       vector<int> left;
        stack<pair<int,int>> s;
        int n = heights.size();
        
        for(int i =0;i<n;i++){
            if(s.size()==0){
                left.push_back(-1);
                
            }
            else if(s.size()>0 && s.top().first<heights[i]){
                left.push_back(s.top().second);
            }
            else if(s.size()>0 && s.top().first>=heights[i]){
                while(s.size()>0 && s.top().first>=heights[i]){
                    s.pop();
                }
                if(s.size()==0){
                    left.push_back(-1);
                }
                else{
                    left.push_back(s.top().second);
                }
            }
            s.push({heights[i],i});
        }
        
        return left;
}
vector<int>  rightArr(vector<int>& heights){
  vector<int> right;
        stack<pair<int,int>> s;
        int n = heights.size();
        
        for(int i = n-1;i>=0;i--){
            if(s.size()==0){
                right.push_back(n);
                
            }
            else if(s.size()>0 && s.top().first<heights[i]){
                right.push_back(s.top().second);
            }
            else if(s.size()>0 && s.top().first>=heights[i]){
                while(s.size()>0 && s.top().first>=heights[i]){
                    s.pop();
                }
                if(s.size()==0){
                    right.push_back(n);
                }
                else{
                    right.push_back(s.top().second);
                }
            }
            s.push({heights[i],i});
        }
        reverse(right.begin(),right.end());
        return right;
}

    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        
        vector<int> area(n);
       
        
       vector<int> left= leftArr(heights);
        vector<int> right=rightArr(heights);
        for(int i =0;i<n;i++){
             int width=right[i]-left[i]-1;
            area[i]=width*heights[i];
        }
       
        int max = *max_element(area.begin(),area.end());
        return max;
    }
};
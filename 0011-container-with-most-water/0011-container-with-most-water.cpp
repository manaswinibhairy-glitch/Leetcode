class Solution {
public:
    int maxArea(vector<int>& height) {
         int i=0;
         int j=height.size()-1;
         int maxArea=0;
         while(i<j){
            int minHeight=min(height[i],height[j]);
            int width=j-i;
            int area= minHeight * width;
            maxArea=max(maxArea,area);
            if(height[i]<height[j]){
                i++;
            }
            else{
                j--;
            }

         }
         return maxArea;
    }
};
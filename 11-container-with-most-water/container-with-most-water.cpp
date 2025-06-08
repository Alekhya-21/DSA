class Solution {
public:
    int maxArea(vector<int>& height) {
    int maxAreaHehe=0;
    int area=0;
    int low=0,high=height.size()-1;
    while(low<high){
        int heightt=min(height[low],height[high]);
        int width=high-low;
        area=heightt*width;
        maxAreaHehe=max(area,maxAreaHehe);
        if(height[low]<height[high]){
            low++;
        }
        else{
            high--;
        }
    }
    return maxAreaHehe;
    }
};
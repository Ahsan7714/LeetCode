class Solution {
public:
    int maxArea(vector<int>& height) {
       int s=0;
       int e=height.size()-1;
       int maxArea=0;
       while(s<e){
        int area = min(height[s],height[e])*(e-s);
         maxArea=max(maxArea,area);
        if(height[s]<height[e]){
            s++;
        }else{
            e--;
        }
       } 
       return maxArea;
    }
};
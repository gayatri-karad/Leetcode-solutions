class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
       int maxWater=0;
       int i=0;
       int j=n-1;
       while(i<j){
        int w=j-i;
        int ht=min(height[i],height[j]);
        int area=w*ht;
        maxWater=max(area,maxWater);
        if(ht==height[i]){
            i++;
        }
        if(ht==height[j]){
            j--;
        }
       }
       return maxWater; 
    }
};
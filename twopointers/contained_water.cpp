class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int st=0;
        int end=n-1;
        int maxarea=0;
        while(st<end){
            int current=min(height[st],height[end])*(end-st);
            maxarea=max(maxarea,current);
            if(height[st]<height[end]){
                st++;
            }else{
                end--;
            }
        }
        return maxarea;
    }
};
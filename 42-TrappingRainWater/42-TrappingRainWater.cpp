// Last updated: 01/02/2026, 21:18:15
class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        vector<int> left(n),right(n);
        int leftMax=height[0];
        for(int i=1;i<n;i++){
            left[i]=leftMax;
            leftMax=max(leftMax,height[i]);
        }
        int rightMax=0;
        for(int i=n-1;i>0;i--){
            right[i]=rightMax;
            rightMax=max(rightMax,height[i]);
        }

        int trappedWater=0;
        for(int i=1;i<n;i++){
            if(left[i]>height[i] && height[i]<right[i])
            trappedWater+=min(left[i],right[i])-height[i];
        }
        return trappedWater;
    }
};
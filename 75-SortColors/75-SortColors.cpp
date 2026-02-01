// Last updated: 01/02/2026, 21:17:55
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int i=0,j=0,k=0;

        for(auto n:nums){
            if(n==0)
            i++;
            if(n==1)
            j++;
            if(n==2)
            k++;
        }

        int ind=0;

        while(i--){
            nums[ind++]=0;
        }

        while(j--){
            nums[ind++]=1;
        }

        while(k--){
            nums[ind++]=2;
        }
    }
};
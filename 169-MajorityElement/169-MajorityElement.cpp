// Last updated: 01/02/2026, 21:17:22
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> m;
        for (int i = 0; i < nums.size(); i++)
        {
            m[nums[i]]++;
        }
        int max=0,res=-1;
        for(auto i:m){
            if(max<i.second){
                res=i.first;
                max=i.second;
            }
        }        
        return res;    
    }
};
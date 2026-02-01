// Last updated: 01/02/2026, 21:17:17
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int> pq;
        for(auto i:nums){
            pq.push(i);
        }
        while(--k){
            pq.pop();
        }
        return pq.top();
    }
};
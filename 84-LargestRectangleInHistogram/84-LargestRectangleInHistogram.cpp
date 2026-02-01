// Last updated: 01/02/2026, 21:17:51
class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n=heights.size();
        vector<int> right(n);
        vector<int> left(n);
        stack<int> st;

        for(int i=0;i<n;i++){
            while(!st.empty() && heights[st.top()]>=heights[i]) st.pop();
            left[i]=st.empty() ? -1 : st.top();
            st.push(i);
        }

        while(!st.empty()) st.pop();

        for(int i=n-1;i>=0;i--){
            while(!st.empty() && heights[st.top()]>=heights[i]) st.pop();
            right[i]=st.empty() ? n : st.top();
            st.push(i);
        }

        int maxArea=0;
        int width;
        for(int i=0;i<n;i++){
            width=right[i]-left[i]-1;
            maxArea=max(maxArea,heights[i]*width);
        }
        return maxArea;
    }
};
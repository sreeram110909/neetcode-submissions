class Solution {
public:
    int maxArea(vector<int>& heights) {

        int n = heights.size();
        int start = 0;
        int end = n - 1;
        int ans = 0;

        while(start < end){

            if(heights[start] < heights[end]){
                ans = max(ans , min(heights[start] , heights[end]) * (end - start));
                start++;
            }else{
                ans = max(ans , min(heights[start] , heights[end]) * (end - start));                
                end--;
            }

        }
        return ans;
    }
};

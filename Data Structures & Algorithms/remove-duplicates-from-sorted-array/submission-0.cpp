class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        int n = nums.size();
        int start = 1;
        int pos = 1;

        while(start < n){

            if(nums[start] == nums[start - 1]){
                start++;
            }else{
                nums[pos] = nums[start];
                pos++;
                start++;
            }
        }
        return pos;
    }
};
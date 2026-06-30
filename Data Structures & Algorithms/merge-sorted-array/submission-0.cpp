class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

        int m2 = nums1.size();
        
        int i = m - 1;
        int j = n - 1;
        int pos = m2 - 1;

        while(i >= 0 && j >=0){

            if(nums1[i] > nums2[j]){
                nums1[pos] = nums1[i];
                pos--;
                i--;
            }else if(nums1[i] < nums2[j]){
                nums1[pos] = nums2[j];
                pos--;
                j--;
            }else if(nums1[i] == nums2[j]){
                nums1[pos] = nums2[j];
                pos--;
                j--;
            }
        }
        while(j >= 0){
            nums1[pos] = nums2[j];
            pos--;
            j--;
        }
    }
};
class Solution {
public:

    bool ispalindrome(string s, int start, int end){

        while(start < end){
            if(s[start] != s[end]){
                return false;
            }else if(s[start] == s[end]){
                start++;
                end--;
            }
        }
        return true;

    }

    bool validPalindrome(string s) {
        
        int n = s.length();
        int start = 0;
        int end = n - 1;

        while(start < end){

            if(s[start] != s[end]){
                return ispalindrome(s,start + 1,end) || ispalindrome(s,start,end-1);
            }
            start++;
            end--;
        }
        return true;
        
    }
};
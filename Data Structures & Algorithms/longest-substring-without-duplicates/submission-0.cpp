class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        int n = s.length();
        unordered_map<char , int> hm;
        int low = 0;
        int ans = 0;

        for(int high = 0; high < n; high++){
            hm[s[high]]++;

            while(hm[s[high]] > 1){
                hm[s[low]]--;
                if (hm[s[low]] == 0){
                    hm.erase(s[low]);
                }
                low++;
            }
            ans = max(ans , high - low + 1);
        }
        return ans;
    }
};

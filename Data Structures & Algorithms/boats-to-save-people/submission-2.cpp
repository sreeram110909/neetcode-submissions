class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {

        int n = people.size();

        sort(people.begin() , people.end());

        int start = 0;
        int end = n-1;
        int count = 0;

        // 1 2 2 3 3

        while (start <= end) {

            int sum = people[start] + people[end];

            if (sum == limit) {
                count++;
                start++;
                end--;
            }
            else if (sum > limit) {
                count++;
                end--;
            }
            else if (sum < limit) { 
                count++;
                start++;
                end--;
            }
        }
        return count;
    }
};
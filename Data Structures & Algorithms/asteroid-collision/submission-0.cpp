class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        int n = asteroids.size();
        stack<int> st;

        for(int i = 0; i < n; i ++){

            bool collision = false;

            while(!st.empty() && st.top() > 0 && asteroids[i] < 0){

                if(st.top() < abs(asteroids[i])){
                    st.pop();
                }else if(st.top() == abs(asteroids[i])){
                    st.pop();
                    collision = true;
                    break;
                }else if(st.top() > abs(asteroids[i])){
                    collision = true;
                    break;
                }
            }
            if(!collision){
                st.push(asteroids[i]);
            }
        }
        vector<int> ans(st.size());

        for(int i = st.size()-1 ; i >= 0 ; i--){
            ans[i] = st.top();
            st.pop();
        }
        return ans;
    }
};



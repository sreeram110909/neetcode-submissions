class Solution {
public:
    int evalRPN(vector<string>& tokens) {

        int n = tokens.size();

        stack<int> st;


        for(int i = 0; i < n; i++){

            if(tokens[i] != "+" && tokens[i] != "-" && tokens[i] != "/" && tokens[i] != "*"){
                st.push(stoi(tokens[i]));
            }else{
                int nums1 = st.top();
                st.pop();
                int nums2 = st.top();
                st.pop();

                if (tokens[i] == "+")
                    st.push(nums2 + nums1);
                else if (tokens[i] == "-")
                    st.push(nums2 - nums1);
                else if (tokens[i] == "*")
                    st.push(nums2 * nums1);
                else
                    st.push(nums2 / nums1);
            }
        }
        return st.top();
    }
};

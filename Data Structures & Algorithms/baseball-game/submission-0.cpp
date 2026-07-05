class Solution {
public:
    int calPoints(vector<string>& operations) {

        int n = operations.size();
        stack<int> st;

        for(int i = 0; i < n; i++){
            
            if(operations[i] != "+" && operations[i] != "C" && operations[i] != "D"){
                st.push(stoi(operations[i]));
            }else{

                if(operations[i] == "+"){
                    int nums1 = st.top();
                    st.pop();
                    int nums2 = st.top();
                    st.pop();

                    st.push(nums2);
                    st.push(nums1);

                    st.push(nums2 + nums1);
                }else if(operations[i] == "C"){
                    st.pop();
                }else{
                    st.push(2*st.top());
                }
            }
            
        }
        int ans = 0;
        while(!st.empty()){
            ans += st.top();
            st.pop();
        }
        return ans;
    }
};
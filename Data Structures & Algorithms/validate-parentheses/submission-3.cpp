class Solution {
public:
    bool isValid(string s) {

        int n = s.length();
        stack<int> st;

        for(int i = 0; i < n; i++){

            if(st.empty()){
                st.push(s[i]);
                continue;
            }

            if(!st.empty() && st.top() == '{' && s[i] == '}' ||
                               st.top() == '(' && s[i] == ')' ||
                               st.top() == '[' && s[i] == ']'){
                
                st.pop();
            }else{
                st.push(s[i]);
            }
            
        }
        if(!st.empty()){
            return false;
        }else{
            return true;
        }
    }
};

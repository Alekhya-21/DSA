class Solution {
public:
    int evalRPN(vector<string>& tokens) {
    stack<int> st;
    int sum=0;
    for(int i=0;i<tokens.size();i++){
        if(isdigit(tokens[i][0]) || (tokens[i][0]=='-' && tokens[i].length()>1)){
            st.push(stoi(tokens[i]));
        }
        else{
            int b=st.top();
            st.pop();
            int a=st.top();
            st.pop();
            if(tokens[i]=="+"){
                st.push(a+b);
            }
            else if(tokens[i]=="-"){
                st.push(a-b);
            }
            else if(tokens[i]=="*"){
                st.push(a*b);
            }
            else{
                st.push(a/b);
            }
        }
    }
    return st.top();  
    }
};
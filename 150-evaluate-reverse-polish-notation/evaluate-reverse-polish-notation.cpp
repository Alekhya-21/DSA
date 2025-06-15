class Solution {
public:
    int evalRPN(vector<string>& tokens) {
    vector<int> arr;
    for(int i=0;i<tokens.size();i++){
        if(isdigit(tokens[i][0]) || (tokens[i][0]=='-' && tokens[i].length()>1)){
            arr.push_back(stoi(tokens[i]));
        }
        else{
            int b=arr[arr.size()-1];
            arr.pop_back();
            int a=arr[arr.size()-1];
            arr.pop_back();
            int temp;
            if(tokens[i][0]=='+'){
                temp=a+b;
            }
            else if(tokens[i][0]=='-'){
                temp=a-b;
            }
            else if(tokens[i][0]=='*'){
                temp=a*b;
            }
            else{
                temp=a/b;
            }
            arr.push_back(temp);
        }
    }
    return arr[arr.size()-1];   
    }
};
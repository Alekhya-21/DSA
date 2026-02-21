class Solution {
public:
    string largestEven(string s) {
    while(!s.empty()){
        int last_digit=s.back()-'0';
        if(last_digit%2==0) return s;
        s.pop_back();
    }
    return s;
    }
};
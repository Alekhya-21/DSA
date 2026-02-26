class Solution {
public:
    string maximumXor(string s, string t) {
    int c1=0,c0=0;
    string res;
    for(int i=0;i<t.size();i++){
        if(t[i]=='1')c1++;
        else c0++;
    }
    for(char i:s){
        if(i=='0'){
            if(c1>0){
                c1--;
                res+='1';
            }
            else{
                c0--;
                res+='0';
            }
        }
        else{
            if(c0>0){
                c0--;
                res+='0';
            }
            else{
                c1--;
                res+='1';
            }
        }
    }
    string ans;
    for(int i=0;i<s.size();i++){
        if(s[i]==res[i]){
            ans+='0';
        }
        else{
            ans+='1';
        }
    }
    return ans;
    }
};
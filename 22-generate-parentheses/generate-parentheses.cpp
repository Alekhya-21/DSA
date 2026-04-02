class Solution {
public:
    void solve(string arr,int open,int close,int n,vector<string>& res){
        if(arr.size()==n*2){
            res.push_back(arr);
            return;
        }
        if(open<n){
            solve(arr+'(',open+1,close,n,res);
        }
        if(close<open){
            solve(arr+')',open,close+1,n,res);
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        string arr;
        solve(arr,0,0,n,res);
        return res;
    }
};
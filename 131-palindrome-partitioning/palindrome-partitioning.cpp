class Solution {
public:
    bool checkPalindrome(string str){
        string new_str=str;
        reverse(new_str.begin(),new_str.end());
        if(str==new_str) return true;
        return false;
    }
    void backtrack(int ind,vector<string>& arr,string s,vector<vector<string>>& res){
        if(ind==s.size()){
            res.push_back(arr);
            return;
        }
        string str="";
        for(int i=ind;i<s.size();i++){
            string str = s.substr(ind, i - ind + 1);
            if(checkPalindrome(str)){
                arr.push_back(str);
                backtrack(i+1,arr,s,res);
                arr.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>> res;
        vector<string> arr;
        backtrack(0,arr,s,res);
        return res;
    }
};
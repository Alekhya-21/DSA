// Time and space complexity- O(n.4^n)
class Solution {
public:
    void backtrack(int ind,string arr,vector<string>& res,string digits,map<char,string>& mp){
        if(arr.size()==digits.size()){
            res.push_back(arr);
            return;
        }
        for(int i=0;i<mp[digits[ind]].size();i++){
            arr+=mp[digits[ind]][i];
            backtrack(ind+1,arr,res,digits,mp);
            arr.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        string arr;
        map<char,string> mp{
            {'2',"abc"},{'3',"def"},{'4',"ghi"},
            {'5',"jkl"},{'6',"mno"},{'7',"pqrs"},
            {'8',"tuv"},{'9',"wxyz"}};
        vector<string> res;
        backtrack(0,arr,res,digits,mp);
        return res;
    }
};
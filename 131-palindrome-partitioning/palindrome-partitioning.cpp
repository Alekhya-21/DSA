class Solution {
public:
    // bool checkPalindrome(string str){
    //     Brute Force palindrome approach
    //     string new_str=str;
    //     reverse(new_str.begin(),new_str.end());
    //     if(str==new_str) return true;
    //     return false;
    // }
        // Dynamic Programming palindrome approach
    bool checkPalindrome(string str,int i,int j,vector<vector<int>>& mat){
            string new_str=str;
            reverse(new_str.begin(),new_str.end());
            if(str==new_str){
                while(i<j){
                    mat[i][j]=1;
                    i++;
                    j--;
                }
                return true;
            }
            else{
                mat[i][j]=0;
                return false;
            }
    }
    void backtrack(int ind,vector<string>& arr,string s,vector<vector<string>>& res,vector<vector<int>>& mat){
        if(ind==s.size()){
            res.push_back(arr);
            return;
        }
        string str="";
        for(int i=ind;i<s.size();i++){
            string str = s.substr(ind, i - ind + 1);
            if(checkPalindrome(str,i,str.size()-1,mat)){
                arr.push_back(str);
                backtrack(i+1,arr,s,res,mat);
                arr.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>> res;
        vector<string> arr;
        int n=s.size();
        vector<vector<int>> mat(n,vector<int>(n,2));
        backtrack(0,arr,s,res,mat);
        return res;
    }
};
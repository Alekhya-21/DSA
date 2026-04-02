class Solution {
public:
    void solve(vector<int>& arr,vector<int>& nums,vector<vector<int>>& res,vector<bool>& mp){
        if(arr.size()==nums.size()){
            res.push_back(arr);
            return;
        }
        for(int j=0;j<nums.size();j++){
            if(!mp[j]){
                mp[j]=true;
                arr.push_back(nums[j]);
                solve(arr,nums,res,mp);
                arr.pop_back();
                mp[j]=false;
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int> arr;
        vector<vector<int>> res;
        vector<bool> mp(3,false);
        solve(arr,nums,res,mp);
        return res;
    }
};
class Solution {
public:
    void solve(int i,vector<int>& arr,vector<vector<int>>& res,vector<int> nums){
        res.push_back(arr);
        for(int j=i;j<nums.size();j++){
            if(j>i && nums[j]==nums[j-1]) continue;
            arr.push_back(nums[j]);
            solve(j+1,arr,res,nums);
            arr.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int> arr;
        vector<vector<int>> res;
        solve(0,arr,res,nums);
        return res;
    }
};
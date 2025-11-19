class Solution {
public:
    void func(int ind,vector<vector<int>>& res,vector<int>& nums,vector<int>& temp){
        res.push_back(temp);
        for(int i=ind;i<nums.size();i++){
            if(i>ind && nums[i]==nums[i-1]) continue;
            temp.push_back(nums[i]);
            func(i+1,res,nums,temp);
            temp.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int ind=0;
        vector<int> temp;
        vector<vector<int>> res;
        func(ind,res,nums,temp);
        return res;
    }
};
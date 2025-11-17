class Solution {
public:
    void func(int ind,vector<int>& nums,vector<vector<int>>& res,vector<int>& temp){
        if(ind==nums.size()){
            res.push_back(temp);
            return;
        }
        temp.push_back(nums[ind]);
        func(ind+1,nums,res,temp);
        temp.pop_back();
        func(ind+1,nums,res,temp);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        // Approach 1- bit manipulation
        // int n=nums.size();
        // int subsets=1<<n;
        // vector<vector<int>> res;
        // for(int i=0;i<subsets;i++){
        //     vector<int> temp;
        //     for(int j=0;j<n;j++){
        //         if((i&(1<<j))!=0){
        //             temp.push_back(nums[j]);
        //         }
        //     }
        //     res.push_back(temp);
        // }
        // return res;

        // Approach 2- Recursion
        vector<int> temp;
        vector<vector<int>> res;
        func(0,nums,res,temp);
        return res;
    }
};
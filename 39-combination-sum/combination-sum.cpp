class Solution {
public:
    void func(int ind,int target,vector<int>& candidates,vector<int>& temp,vector<vector<int>>& res){
        if(ind==candidates.size()){
            if(target==0){
                res.push_back(temp);
            }
            return;
        }
        if(candidates[ind]<=target){
            temp.push_back(candidates[ind]);
            func(ind,target-candidates[ind],candidates,temp,res);
            temp.pop_back();
        }
        func(ind+1,target,candidates,temp,res);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> temp;
        vector<vector<int>> res;
        func(0,target,candidates,temp,res);
        return res;
    }
};
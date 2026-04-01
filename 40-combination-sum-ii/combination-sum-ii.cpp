class Solution {
public:
    void solve(int i,int target,vector<int>& arr,vector<int>& candidates,vector<vector<int>>& res){
            if(target==0){
                res.push_back(arr);
                return;
            }
        for(int j=i;j<candidates.size();j++){
            if(j>i && candidates[j]==candidates[j-1]) continue;
            if(candidates[j]>target) break;
            arr.push_back(candidates[j]);
            solve(j+1,target-candidates[j],arr,candidates,res);
            arr.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>> res;
        vector<int> arr;
        solve(0,target,arr,candidates,res);
        return res;
    }
};
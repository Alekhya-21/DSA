// class Solution {
// public:
//     void func(int ind,int target,vector<int>& candidates,vector<int>& temp,vector<vector<int>>& res){
//         if(ind==candidates.size()){
//             if(target==0){
//                 res.push_back(temp);
//             }
//             return;
//         }
//         if(candidates[ind]<=target){
//             temp.push_back(candidates[ind]);
//             func(ind,target-candidates[ind],candidates,temp,res);
//             temp.pop_back();
//         }
//         func(ind+1,target,candidates,temp,res);
//     }
//     vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
//         vector<int> temp;
//         vector<vector<int>> res;
//         func(0,target,candidates,temp,res);
//         return res;
//     }
// };

class Solution {
public:
    void solve(int i,vector<int>& arr, int target,vector<int>& candidates,vector<vector<int>>& res){
        if(i==candidates.size()){
            if(target==0){
                res.push_back(arr);
            }
            return;
        }
        if(candidates[i]<=target){
            arr.push_back(candidates[i]);
            target-=candidates[i];
            solve(i,arr,target,candidates,res);
            target+=candidates[i];
            arr.pop_back();
        }
        solve(i+1,arr,target,candidates,res);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> arr;
        vector<vector<int>> res;
        solve(0,arr,target,candidates,res);
        return res;
    }
};
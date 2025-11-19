class Solution {
public:
    void func(int ind,int target,vector<int>& temp,vector<vector<int>>& res,vector<int>& arr){
        if(target==0){
            res.push_back(temp);
            return;
        }
        for(int i=ind;i<arr.size();i++){
            if(i>ind && arr[i]==arr[i-1]) continue;
            if(arr[i]>target) break;
            temp.push_back(arr[i]);
            func(i+1,target-arr[i],temp,res,arr);
            temp.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& arr, int target) {
        sort(arr.begin(),arr.end());
        vector<int> temp;
        vector<vector<int>> res;
        func(0,target,temp,res,arr);
        return res;
    }
};
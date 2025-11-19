class Solution {
public:
    void func(vector<int>& nums,vector<bool>& map,vector<int>& temp,vector<vector<int>>& res){
        if(temp.size()==nums.size()){
            res.push_back(temp);
            return;
        }
        for(int i=0;i<nums.size();i++){
            if(!map[i]){
                map[i]=true;
                temp.push_back(nums[i]);
                func(nums,map,temp,res);
                temp.pop_back();
                map[i]=false;
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<bool> map(nums.size());
        vector<int> temp;
        vector<vector<int>> res;
        func(nums,map,temp,res);
        return res;
    }
};
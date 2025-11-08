class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int max_count=0;
        int ind=0;
        int res_count=0;
        for(int i=0;i<mat.size();i++){
            int cow=count(mat[i].begin(),mat[i].end(),1);
                if(cow>max_count){
                    max_count=cow;
                    ind=i;
                    res_count=cow;
                }
        }
        return {ind,res_count};
    }
};
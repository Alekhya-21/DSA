class Solution {
public:
    int lower_bound(vector<int>& mat,int x){
        int ans=0;
        int low=0;
        int high=mat.size()-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(mat[mid]>=x){
                ans=mat.size()-mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        // brute force
        // int max_count=0;
        // int ind=0;
        // int res_count=0;
        // for(int i=0;i<mat.size();i++){
        //     int cow=count(mat[i].begin(),mat[i].end(),1);
        //         if(cow>max_count){
        //             max_count=cow;
        //             ind=i;
        //             res_count=cow;
        //         }
        // }
        // return {ind,res_count};

        // binary search
        int max_count=0;
        int ind=0;
        int res_count=0;
        for(int i=0;i<mat.size();i++){
            sort(mat[i].begin(),mat[i].end());
            int cow=lower_bound(mat[i],1);
                if(cow>max_count){
                    max_count=cow;
                    ind=i;
                    res_count=cow;
                }
        }
        return {ind,res_count};
    }
};
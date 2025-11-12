// class Solution {
// public:
//     int func(vector<vector<int>>& mat,int m,int n,int mid){
//         int row;
//         int maxi=0;
//         for(int i=0;i<m;i++){
//             if(mat[i][mid]>maxi){
//                 maxi=mat[i][mid];
//                 row=i;
//             }
//         }
//         return row;
//     }
//     vector<int> findPeakGrid(vector<vector<int>>& mat) {
//         int m=mat.size();
//         int n=mat[0].size();
//         int low=0;
//         int high=n-1;
//         vector<int> res;
//         while(low<=high){
//             int mid=(low+high)/2;
//             int row=func(mat,m,n,mid);
//             int left=mid-1>0 ? mat[row][mid-1]:-1;
//             int right=mid+1<n ? mat[row][mid+1]:-1;
//             if(mat[row][mid]>left && mat[row][mid]>right){
//                 res={row,mid};
//                 return res;
//             }
//             else if(mat[row][mid]<left){
//                 high=mid-1;
//             }
//             else{
//                 low=mid+1;
//             }
//         }
//         return res;
//     }
// };

class Solution {
public:
    int func(vector<vector<int>>& mat,int mid,int m,int n){
        int maxi=0;
        int row_ind;
        for(int i=0;i<m;i++){
            if(mat[i][mid]>maxi){
                maxi=mat[i][mid];
                row_ind=i;
            }
        }
        return row_ind;
    }
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int m=mat.size();
        int n=mat[0].size();
        vector<int> res;
        int low=0,high=n-1;
        while(low<=high){
            int mid=(low+high)/2;
            int row=func(mat,mid,m,n);
            int left=mid-1>0?mat[row][mid-1]:-1;
            int right=mid+1<n?mat[row][mid+1]:-1;
            if(mat[row][mid]>left && mat[row][mid]>right){
                res={row,mid};
                return res;
            }
            else if(mat[row][mid]<left){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return res;
    }
};
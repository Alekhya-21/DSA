// O(log m + log n)
// class Solution {
// public:
//     bool func(vector<int>& matrix,int target,int n){
//         bool flag=false;
//         int low=0,high=n-1;
//         while(low<=high){
//             int mid=(low+high)/2;
//             if(matrix[mid]==target){
//                 flag=true;
//                 return flag;
//             }
//             else if(target<matrix[mid]){
//                 high=mid-1;
//             }
//             else{
//                 low=mid+1;
//             }
//             mid=(low+high)/2;
//             if((mid==0 || mid==n-1) && (matrix[mid]!=target)){
//                 flag=false;
//                 return flag;
//             }
//         }
//         return flag;
//     }
//     bool searchMatrix(vector<vector<int>>& matrix, int target) {
//         int m=matrix.size();
//         int n=matrix[0].size();
//         int low=0,high=m-1;
//         bool search=false;
//         while(low<=high){
//             int mid=(low+high)/2;
//             if(target>=matrix[mid][0] && target<=matrix[mid][n-1]){
//                 search=func(matrix[mid],target,n);
//                 return search;
//             }
//             else if(target<matrix[mid][0]){
//                 high=mid-1;
//             }
//             else{
//                 low=mid+1;
//             }
//         }
//         return search;
//     }
// };

// O(log(m * n))
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        bool flag=false;
        int m=matrix.size();
        int n=matrix[0].size();
        int low=0,high=m*n-1;
        while(low<=high){
            int mid=(low+high)/2;
            int row=mid/n;
            int col=mid%n;
            if(matrix[row][col]==target){
                flag=true;
                return flag;
            }
            else if(target<matrix[row][col]){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return flag;
    }
};
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        bool flag=false;
        int m=matrix.size();
        int n=matrix[0].size();
        int row=0,col=n-1;
        while(row<m && col>=0){
            if(matrix[row][col]==target){
                flag=true;
                return flag;
            }
            else if(matrix[row][col]>target){
                col--;
            }
            else{
                row++;
            }
        }
        return flag;
    }
};
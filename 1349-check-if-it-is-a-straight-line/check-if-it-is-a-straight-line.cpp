class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
    int l=coordinates[1][1]-coordinates[0][1];
    int m=coordinates[1][0]-coordinates[0][0];
    for(int i=1;i<coordinates.size();i++){
            if((coordinates[i][1]-coordinates[i-1][1])*m!=
               (coordinates[i][0]-coordinates[i-1][0])*l){
                   return 0;
               }
    }
    return 1;
    }
};
// slope m=(y2-y1)/(x2-x1) (for linear equation)
// m=y/x;
// x*(y2-y1)=y*(x2-x1)
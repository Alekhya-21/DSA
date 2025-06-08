class Solution {
public:
    int titleToNumber(string columnTitle) {
    int j=columnTitle.length()-1;
    int sum=0;
    for(int i=0;i<columnTitle.length();i++){
        sum=sum+pow(26,j)*(columnTitle[i]-64);
        j--;
    }
    return sum;
    }
};
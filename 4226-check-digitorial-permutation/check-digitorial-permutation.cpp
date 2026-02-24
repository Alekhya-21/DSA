class Solution {
int factorial(int n){
    int fact=1;
    while(n>0){
        fact=fact*n;
        n=n-1;
    }
    return fact;
}
public:
    bool isDigitorialPermutation(int n) {
    int temp=n,sum=0;
    while(n>0){
        int r=n%10;
        sum+=factorial(r);
        n=n/10;
    }
    string a=to_string(sum);
    string b=to_string(temp);
    if(a.size()!=b.size()) return false;
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    if(a==b)return true;
    return false;
    }
};
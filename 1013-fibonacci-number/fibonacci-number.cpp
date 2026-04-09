// // Iterative
// TC- O(n), SC- O(1)
// class Solution {
// public:
//     int fib(int n) {
//         int a=0;
//         int b=1;
//         int c;
//         if(n==0) return 0;
//         if(n==1) return 1;
//         for(int i=2;i<=n;i++){
//             c=a+b;
//             a=b;
//             b=c;
//         }
//         return c;
//     }
// };


// Recursive
// TC- O(2^n), SC- O(n)
// class Solution {
// public:
//     int fib(int n) {
//         if(n==0) return 0;
//         if(n==1) return 1;
//         return fib(n-1)+fib(n-2);
//     }
// };

// DP
class Solution {
public:
    int func(int n,vector<int>& dp){
        if(n<=1) return n;
        if(dp[n]!=-1) return dp[n];
        dp[n]=func(n-1,dp)+func(n-2,dp);
        return dp[n];
    }
    int fib(int n) {
        vector<int> dp(n+1,-1);
        return func(n,dp);
    }
};
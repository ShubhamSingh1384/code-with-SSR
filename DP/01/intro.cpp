// THOSE WHO FORGET THE PAST, ARE CONDEMNED TO REPEAT IT.
/*
    2 Approaches:-

    -> Top-Down -> recursion + memoization (store the value of subproblem in map/table) 
    -> Buttom-Up -> Tabulation
*/

#include<iostream>
#include<vector>
using namespace std;

// basic recursion code
int fibonacci(int n){
    if(n == 1) return 1;
    if(n == 0) return 0;

    int n1 = fibonacci(n-1);
    int n2 = fibonacci(n-2);

    return n1+n2;
}

// it is Top-Down (recursion and memoization)
int DP_TD_fibonacci(int n , vector<int>& dp){
    if(n == 1 || n == 0)
    return n;

    if(dp[n] != -1)
    return dp[n];

    dp[n] = DP_TD_fibonacci(n-1 , dp)+DP_TD_fibonacci(n-2 , dp);
    return dp[n];
}

//it is Bottom-Up (Tabulation)
int DP_BU_fibonacci(int n){
    vector<int> dp(n+1,0);
    dp[0] = 0;
    dp[1] = 1;
    for(int i=2; i<=n; i++){
        dp[i] = dp[i-1]+dp[i-2];
    }
    return dp[n];
}

//Space Optimisation
int SpaceFibonacci(int n){
    int a = 0;
    int b = 1;
    if(n == 0) return a;
    if(n == 1) return b;
    int ans = 0;
    for(int i=2; i<=n; i++){
        ans = a+b;
        a = b;
        b = ans;
    }
    return ans;
}

int main(){
    int n;
    cin >> n;
    // cout << fibonacci(n);
    vector<int> dp(n+1, -1);

    cout << DP_TD_fibonacci(n , dp) << endl;
    cout << DP_BU_fibonacci(n) << endl;
    cout << SpaceFibonacci(n) << endl;
}
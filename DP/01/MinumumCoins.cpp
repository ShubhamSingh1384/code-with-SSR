#include <bits/stdc++.h> 
using namespace std;

int solve(vector<int> num, int x , vector<int>& dp){
    if(x == 0) return 0;
    if(x < 0) return INT_MAX;
    if(dp[x] != -1) return dp[x];

    int mini = INT_MAX;
    for(int i=0; i<num.size(); i++){
        int coins = solve(num , x-num[i], dp);
        if(coins != INT_MAX){
            mini = min(mini , 1+coins);
        }
    }
    dp[x] = mini;
    return mini;
}
// bottom to top approach
int solveTab(vector<int>&num, int x){
    vector<int> dp(x+1, INT_MAX);
    dp[0] = 0;

    for(int i=1; i<=x; i++){
        // i m trying to solve for every amount figure from 1 to x
        for(int j=0; j<num.size(); j++){
            if(i-num[j] >= 0 && dp[i-num[j]] != INT_MAX){
                dp[i] = min(dp[i] , 1+dp[i-num[j]]);
            }
        }
    }
    if(dp[x] == INT_MAX) return -1;

    return dp[x];
}

int minimumElements(vector<int> &num, int x)
{
    if(num.size() == 0 && x == 0) return 0;
    // Write your code here.
    // int n = num.size();
    
    // vector<int> dp(x+1, -1);
    // int ans = solve(num, x, dp);
    
    // if(ans == INT_MAX) return -1;
    // return ans;


    int ans = solveTab(num, x);
    
    return (ans == INT_MAX)? -1 : ans;
}

int main(){
    vector<int> vec = {1,2,3};
    int target = 7;

    cout << minimumElements(vec, target);
}
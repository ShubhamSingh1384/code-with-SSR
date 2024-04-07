// lecture 105;

// Maximum Sum of Non-Adjacent Elements:
// https://www.codingninjas.com/studio/problems/maximum-sum-of-non-adjacent-elements_843261?leftPanelTab=0&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbar&leftPanelTabValue=PROBLEM

#include <bits/stdc++.h>
using namespace std;

int solveTab(vector<int>& nums){
    int n = nums.size();
    vector<int> dp(n,0);
    dp[0] = nums[0];

    for(int i=1; i<n; i++){
        int incl = dp[i-2] + nums[i];
        int excl = dp[i-1] + 0;
        dp[i] = max(incl, excl);
    }

    return dp[n-1];
}

int solveTabOptim(vector<int>& nums){
    int n = nums.size();
    int prev2 = 0;
    int prev1 = nums[0];

    for(int i=1; i<n; i++){
        int incl = prev2 + nums[i];
        int excl = prev1 + 0;

        int ans = max(incl, excl);
        prev2 = prev1;
        prev1 = ans;
    }

    return prev1;
}

int main(){
    


   return 0;
}
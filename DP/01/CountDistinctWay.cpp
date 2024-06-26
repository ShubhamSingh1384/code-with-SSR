#include<iostream>
#include<math.h>
using namespace std;
#define MOD 1000000007;

// simple recursion
int solve(long long nStairs , int i){
    if(i == nStairs)
    return 1;
    if(i > nStairs) 
    return 0;

    return (solve(nStairs , i+1) + solve(nStairs, i+2))% MOD;
}

int coutDistinctWayToclimbStair(long long nStairs){
    int start = 0;
    int ans = solve(nStairs , start);

    return ans;
}
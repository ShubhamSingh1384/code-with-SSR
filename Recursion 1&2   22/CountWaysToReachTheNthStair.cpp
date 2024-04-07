// count the way to reach the stair
#include<iostream>
using namespace std;

int stairCount(long long nStair){
    // base case
    if(nStair==0) return 1;
    if(nStair < 0) return 0;

    // Recursive Relation
    int ans = stairCount(nStair-2) + stairCount(nStair - 1);

    return ans;
}

int main(){
    long long n;
    cin >> n;

    cout << stairCount(n);
}
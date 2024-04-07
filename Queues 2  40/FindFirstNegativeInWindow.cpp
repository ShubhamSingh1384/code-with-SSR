#include<iostream>
#include<queue>
#include<vector>
using namespace std;

vector<long long> printFirstNegativeINteger(long long int A[],
                                            long long int N, long long int k){
    deque<long long int> dq;
    vector<long long int> ans;

    // process first window of k size
    for(int i=0; i<k; i++){
        if(A[i] < 0){
            dq.push_back(i);
        }
    }

    // store answer of first k size window
    if(dq.size() > 0){
        ans.push_back(A[dq.front()]);
    }
    else{
        ans.push_back(0);
    }

    // process for remaining windows

    for(int i=k; i<N; i++){
        // removal
        if(!dq.empty() && i-dq.front() >=  k){
            dq.pop_front();
        }

        // addition
        if(A[i] < 0){
            dq.push_back(i);
        }
        //ans store
        if(dq.size() > 0){
            ans.push_back(A[dq.front()]);
        }
        else{
            ans.push_back(0);
        }
    }
    return ans;
}

int main(){
    long long int A[] = {-8, 2, 3, -6, 10};
    long long int N = 5;
    long long int K = 2;

    vector<long long> ans = printFirstNegativeINteger(A , N , K);

    for(int i=0; i<ans.size(); i++){
        cout << ans[i] << " ";
    }
    cout << endl;
}
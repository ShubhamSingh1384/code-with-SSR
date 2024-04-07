#include<iostream>
#include<vector>
using namespace std;

void solve(vector<int> num, int index, vector<vector<int>>& ans){
    if(index >= num.size()){
        ans.push_back(num);
        return;
    }

    for(int i=index; i<num.size(); i++){
        swap(num[index] , num[i]);
        solve(num , index+1, ans);
        swap(num[index] , num[i]);
    }
}

vector<vector<int>> permutation(vector<int>& num){
    vector<vector<int>> ans;
    int index = 0;
    solve(num , index, ans);

    return ans;
}

int main(){
    vector<int> vec{1,2,3};

    vector<vector<int>> ans = permutation(vec);

    for(int i=0; i<ans.size(); i++){
        for(int j=0; j<ans[i].size(); j++){
            cout << ans[i] [j] << " ";
        }
        cout << endl;
    }
}
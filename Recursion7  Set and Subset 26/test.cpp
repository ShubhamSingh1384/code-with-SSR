#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<vector<int>> test{{1,2,3,4} , {5,6,7,8}, {9,10,11,12}};

    for(int i=0; i<test.size(); i++){
        for(int j=0; j<test[i].size(); j++){
            cout << test[i][j] << " ";
        }
        cout << endl;
    }
    
}
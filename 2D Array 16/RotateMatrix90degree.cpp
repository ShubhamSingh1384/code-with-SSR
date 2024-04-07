#include<iostream>
#include<vector>
using namespace std;

void RotateMatrix(vector<vector<int>> vec){
    int row = vec.size();
    int col = vec[0].size();
    int total = row*col;
    int count = 0;

    while(count<total){
        for(int i=0; i<col; i++){
            for(int j=row-1; j>=0; j--){
                cout<<vec[j][i]<<" ";
                count++;
            }cout<<endl;
        }
    }
}

int main(){
    vector<vector<int>> vec{{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};

    RotateMatrix(vec);
}
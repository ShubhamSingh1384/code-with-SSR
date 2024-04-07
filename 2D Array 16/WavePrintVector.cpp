//Observation :- jab v index odd hai ham ham niche se uper ja rhe hai aur jb v even hai uper se niche
#include<iostream>
#include<vector>
using namespace std;

void WavePrint(vector<vector<int>> vec, int Rows, int Cols){
    for(int col=0; col<Cols; col++){
        if(col&1){

            //odd Index -> Bottom to top
            for(int row=Rows-1; row>=0; row--){
                cout<<(vec[row][col])<<" ";
            }
        }
        else{
            // 0 or even index -> top to bottom
            for(int row=0; row<Rows; row++){
                cout<<(vec[row][col])<<" ";
                
            }
        }
    }
}

int main(){
vector<vector<int>> vec{{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};

    // taking 2d vector as input;
    // int val;
    // cout<<"Take input for vector"<<endl;
    // for(int i=0; i<3; i++){
    //     vector<int> temp;
    //     for(int j=0; j<4; j++){
    //         cin>>val;
    //         temp.push_back(val);
    //     }
    //     vec.push_back(temp);
    //     temp.clear();
    // }

    WavePrint(vec,4,4);
    
}
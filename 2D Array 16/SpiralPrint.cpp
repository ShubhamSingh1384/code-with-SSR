#include<iostream>
#include<vector>
using namespace std;

vector<int> spiralOrder(vector<vector<int>>& matrix){
    vector<int> ans;
    int row = matrix.size();
    int col = matrix[0].size();

    int count = 0;
    int total = row*col;

    //index initialisation
    int startingRow = 0;
    int startingCol = 0;
    int endingRow = row-1;
    int endingCol = col-1;
    

    while(count<total){
        // print starting row
        for(int index = startingCol; count<total && index<=endingCol; index++){
            ans.push_back(matrix[startingRow][index]);
            count++;
        }
        startingRow++;
        
        //print ending column
        for(int index=startingRow; count<total && index<=endingRow; index++){
            ans.push_back(matrix[index][endingCol]);
            count++;
        }
        endingCol--;

        //print ending row
        for(int index=endingCol; count<total && index>=startingCol; index--){
            ans.push_back(matrix[endingRow][index]);
            count++;
        }
        endingRow--;

        //print starting column
        for(int index=endingRow; count<total && index>=startingRow; index--){
            ans.push_back(matrix[index][startingCol]);
            count++;
        }
        startingCol++;
    }
    return ans;
}

int main(){
    vector<vector<int>> vec = {{1,2,3,4},{14,15,16,5},{13,20,17,6},{12,19,18,7}};
    vector<int> ans = spiralOrder(vec);
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }

}
//3 5
//{{6 ,6, 2},{28, 2, 12},{26, 3, 28},{7, 22, 25},{3, 4, 23}}
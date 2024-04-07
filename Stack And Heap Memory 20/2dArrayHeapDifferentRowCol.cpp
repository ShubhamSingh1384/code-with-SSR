// How to create a 2D array dnamically
// input / output
// memory free kaise karani hai

// 2D Array having different Row and col;

// BHAIYA DHIYAN DE KI AAP JO V HEAP MEMORY ME BANATE HAI US KO DELETE V MANUALLY AAP KO HE KRNA HOTA HAI

#include<iostream>
using namespace std;
int main(){
    int row, col;
    cin >> row >> col;

    // creating a 2D array
    int **arr = new int* [row]; //2> Baad me is part ko delete krna hai 
                                //3> taki data leak na ho;
    for(int i=0; i<row; i++){   //1> jb memory releasse kr rhe ho tb pahle is part ko delete krna hai
        arr[i] = new int [col];
    }

    // taking input
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cin >> arr[i][j];
        }
    }

//     for(int i=0; i<row; i++){
//         delete [] arr[i];
//     }
//    delete []arr;

    // taking output
    cout << endl;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // releasing memory
    // visualisation me jao bhaiya aur dekho ki pahle kya delete krna hai
    // 
    for(int i=0; i<row; i++){
        delete [] arr[i];
    }
    delete []arr;

    return 0;
}
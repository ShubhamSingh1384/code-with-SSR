#include<iostream>
using namespace std;
int main(){
    int i = 5;
    int *arr = new int;
    cout << arr << endl;
    arr = &i;
    cout << *arr << endl;

    int *ar = new int[5];
    for(int i=0; i<5; i++){
        cin >> ar[i];
    }
    for(int i=4; i>=0; i--){
        cout << ar[i] << " " ;
    }
    cout << endl;

    int **a = new int* [4];
    for(int i=0; i<5; i++){
        a[i] = new int[3];
    }

    for(int i=0; i<4; i++){
        for(int j=0; j<3; j++){
            cin >> a[i][j];
        }
    }

    // for(int i=0; i<3; i++){
    //     delete [] a[i];
    // }
    // delete [] a;

    cout << endl;

    for(int i=0; i<4; i++){
        for(int j=0; j<3; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

}
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int arr[] = {1,2,33,4,5};
    int* temp = arr;
    temp[3] = 787;
    sort(temp, temp+5);
    for(int i=0; i<5; i++){
        cout << arr[i] << " ";
    }

}
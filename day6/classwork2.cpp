// Maximum and minimum value in array
#include<iostream>
#include<limits.h>
#include<algorithm>
//#define maxi INT_MIN
using namespace std;
int getMax(int num[] , int size){
    int maxi = INT_MIN;
    
    for(int i=0; i<size; i++){
        maxi = max(maxi , num[i]);
    }

    return maxi;
}

int getMin(int num[] , int size){
    int mini = INT_MAX;

    for(int i=0; i<size; i++){
        mini = min(mini , num[i]);
    }
    return mini;
}


int main(){
    int num[] = {2,1,33,24,56,54};

    cout << getMax(num , 6) << endl;
    cout << getMin(num , 6) << endl;
    
}
// How to use INT_MAX;
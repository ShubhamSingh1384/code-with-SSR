#include<iostream>
using namespace std;

bool is_Possible(int walls[] , int size , int p , int mid){
    int painter = 1;
    int wallFace = walls[0];
    for(int i=1; i<size; i++){
        if(walls[i] > mid) return false;

        if(walls[i]+wallFace <= mid){
            wallFace += walls[i];
        }
        else{
            painter++;
            if(painter > p) return false;
            wallFace = walls[i];
        }
    }
    return true;
}

int PainterPartition(int walls[] , int size , int p){
    int s=0 , e = 0;
    for(int i=0; i<size; i++){
        e += walls[i];
    }
    int mid = s + (e-s)/2;
    int ans = 0;
    while(s <= e){
        if(is_Possible(walls , size , p , mid)){
            ans = mid;
            e = mid - 1;
        }
        else{
            s = mid + 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}

int main(){
    int walls[] = {10,20,30,40};
    cout << PainterPartition(walls , 4 , 2);
}
#include<iostream>
#include<algorithm>
using namespace std;

bool IsPossible(int stall[] , int stalls , int cow , int mid){
    int cowCount = 1;
    int lastPossion = stall[0];

    for(int i=0; i<stalls ; i++){
        if(stall[i] - lastPossion >= mid){ // es loop pe thora dhiyan dena hai (OK BROOO)
           cowCount++;                     // voshriwala thik se padhna
            if(cowCount == cow){
                return true;
            }
            lastPossion = stall[i];
        }
    }
    return false;
}

int Aggeressivek(int stall[] , int stalls , int cow){
    sort(stall , stall + stalls);  // sort is necessary because binary search in possible only in sorted array
    int start = 0;
    int maxi = -1;
    for(int i=0; i<stalls; i++){
        maxi = max(maxi , stall[i]);
    }
    int end = maxi , ans = -1;
    int mid = start + (end - start)/2;
    while(start <= end){
        if(IsPossible(stall , stalls ,cow ,mid)){
            ans = mid;
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
        mid = start + (end - start)/2;
    }
    return ans ;
}

int main(){
    int stall[] = {2,4,6,8};
    cout<<"largest minimum distance : "<<Aggeressivek(stall , 4 , 3);
}
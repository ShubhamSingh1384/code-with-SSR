// move all zeros element to the right side;
// and all non zero to left without sorting;

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void moveZeros(vector<int> &nums){
    int nonZero = 0;
    for(int j=0; j<nums.size(); j++){
        if(nums[j] != 0){
            swap(nums[j] , nums[nonZero]);
            nonZero++;
        }
    }

}

int main(){

    vector<int> v;
    
    v.push_back(0);
    v.push_back(0);
    v.push_back(0);
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    moveZeros(v);

    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }

}
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
// #include <bits/stdc++.h>
using namespace std;

bool Check(vector<vector<int>> vec , int target){
    int row = vec.size();
    int col = vec[0].size();
    int start = 0 , end = row * col - 1;
    int mid = start + (end-start)/2;
    while(start <= end){
        int element = vec[mid/col] [mid%col];
        if(element == target)
        return 1;
        else if(element < target)
        start = mid + 1;
        else 
        end = mid - 1;

        mid = start + (end - start)/2;
    }
    return 0;
}

bool searchMatrix(vector<vector<int>> vec , int target){
    int row = vec.size();
    int col = vec[0].size();
    int rowIndex = 0;
    int colIndex = col-1;
    while(rowIndex < row && colIndex >= 0){
        int element = vec[rowIndex] [colIndex];
        if(element == target)
        return 1;
        else if(element < target)
        rowIndex++;
        else 
        colIndex--;
    }
    return 0;
}

vector<int> Row_wise_sum(vector<vector<int>> vec){
    vector<int> sum;
    for(int i=0; i<vec.size(); i++){
        int s = 0;
        for(int j=0; j<vec[i].size(); j++){
            s += vec[j][i];
        }
        sum.push_back(s);
    }
    return sum;
}

int main(){
    // vector<vector<int>> vec = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    // int target;
    // cin >> target;
    // if(Check(vec , target)){
    //     cout << "Target is present" << endl;
    // }
    // else{
    //     cout << "Target is not present" << endl;
    // }
    // vector<vector<int>> vec2{{1,4,7,11,15},{2,5,8,12,19},{3,6,9,16,22},{10,13,14,17,24}};

    // if(searchMatrix(vec2 , target))
    // cout << "Target is present" <<endl;
    // else
    // cout << "Target is not present" << endl;

    // vector<int> sum = Row_wise_sum(vec);
    // for(int i=0; i<sum.size(); i++){
    //     cout << sum[i] << " ";
    // }

    // string s = "shubham singh";
    // s.pop_back();
    // sort(s.begin() , s.end());
    // cout << s << " " << s.back();
    // char ch = 97+0;
    // cout << ch << endl;
    // s.erase(1 , 2);
    // cout << s;
    // cout << " " << s.length();
    string s = "11:00:00:PM";

    
    // cout << s << endl;
    // char ch = '4';
    // int cd =  ch -'0';
    // cout << cd;
    int c = (s[0] - '0')*10 + (s[1]-'0');
    // cout << c;
    // cout << round(56.5);
    cout << 0%5;
}
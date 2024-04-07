#include<iostream>
#include<vector>
using namespace std;

vector<int> reverse(vector<int> v){
    int s = 0;
    int e = v.size()-1;
    while(s<e){
        swap(v[s++] , v[e--]);
    }
    return v;
}

vector<int> findArraySum(vector<int> a, int n, vector<int> b , int m){
    int i = n-1;
    int j = m-1;
    vector<int> ans;
    int carry = 0;

    while(i>=0 && j>=0){
        int val1 = a[i];
        int val2 = b[j];

        int sum = val1 + val2 + carry;

        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
        i--;
        j--;
    }
    //First Case :-
    while(i>=0){
        int sum = a[i] + carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
        i--;
    }
    // Second Case :-
    while(j>=0){
        int sum = b[j] + carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
        j--;
    }
    // Third Case :-
    while(carry != 0){
        int sum = carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
    }
    return reverse(ans);
}

int main(){
    vector<int> vec1;
    vector<int> vec2;

    vec1.push_back(3);
    vec1.push_back(4);
    vec1.push_back(5);

    vec2.push_back(7);
    vec2.push_back(9);
    vec2.push_back(6);

    int n = vec1.size();
    int m = vec2.size();

    vector<int> result = findArraySum(vec1 , n , vec2 , m);

    for(int i=0; i<result.size(); i++){
        cout<<result[i]<<" ";
    }
}
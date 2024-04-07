// Use (temp[(i+k)%nums.size() = nums[i]])ans then copy temp into nums;
#include<iostream>
#include<vector>
using namespace std;

class Solution{
    public:
    vector<int> rotate(vector<int> nums , int k){
        vector<int> temp(nums.size());
        for(int i=0; i<nums.size(); i++){
            temp[(i+k)%nums.size()] = nums[i];
        }
         // copy temp into nums vector
         nums = temp;

         return nums;
    }

    void display(vector<int> v){
        for(int i=0; i<v.size(); i++){
            cout<<v[i]<<" ";
        }
    }
};

int main(){
    Solution s;

    vector<int> vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);
    vec.push_back(6);
    vec.push_back(7);    
    vec.push_back(8);    
    // vec.push_back(9);    

    
    int k = 3;
    vector<int> result = s.rotate(vec , vec.size()-k);

    s.display(result);

}
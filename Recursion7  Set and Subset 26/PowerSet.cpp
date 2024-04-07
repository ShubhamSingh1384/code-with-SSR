// power set :- All subset of a set;
// 2 to the power n;(n is number of element)
/*
  KAHANI :- BhaiSahab pahle EXCLUDE aur phir INCLUDE pe bises dhiyan de 
            phir soche ki recursion EXCLUDE krne ka mtlb wo vector me aage badhte rahega
            INCLUDE kr ka mtlb output vector k madat se input lenga 
            (PER ROW PER SUBSET)
*/
#include<iostream>
#include<vector>
using namespace std;

    void solve(vector<int> nums, vector<int> output, int index, vector<vector<int>>& ans){
        // base case
        if(index >= nums.size()){
            ans.push_back(output);
            return ;
        }
        //exclude 
        solve(nums, output, index+1, ans);  // Index ka khel thora samajhna hoga 
                                            // (index base case me jane k baad wapes kis value se niche aata hai)
        //include
        int element = nums[index];
        output.push_back(element);
        solve(nums, output, index+1, ans);
    }


    vector<vector<int>> subsets(vector<int> nums){
        vector<vector<int>> ans;
        vector<int> output;
        int index = 0;

        solve(nums, output, index, ans);

        return ans;
    }

int main(){
    vector<int> vect{1,2,3};

     vector<vector<int>> ans = subsets(vect);

    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << " ";
        }   
        cout << endl;
    }

    
}
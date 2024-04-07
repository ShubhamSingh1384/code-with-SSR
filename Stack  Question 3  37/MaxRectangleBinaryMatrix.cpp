// Time Complexity : O(n*m);  --> size n ans m size of row and column;
// space complexity : O(n);
#include<bits/stdc++.h>
using namespace std;

class Solution{
    private:
    vector<int> nextSmallerElementIndex(vector<int> heights, int n){
        vector<int> ans(n);
        stack<int> s;
        s.push(-1);
        for(int i=n-1; i>=0; i--){
            int curr = heights[i];
            while(s.top() != -1 && curr <= heights[s.top()]){
                s.pop();
            }
            ans[i] = s.top();
            s.push(i);
        }
        return ans;
    }

    vector<int> prevSmallerElementIndex(vector<int> heights, int n){
        vector<int> ans(n);
        stack<int> s;
        s.push(-1);
        for(int i=0; i<n; i++){
            int curr = heights[i];
            while(s.top() != -1 && curr <= heights[s.top()]){
                s.pop();
            }
            ans[i] = s.top();
            s.push(i);
        }
        return ans;
    }

    int LargestRectangularArea(vector<int> heights, int n){
        vector<int> next;
        next = nextSmallerElementIndex(heights, n);
        vector<int> prev;
        prev = prevSmallerElementIndex(heights, n);

        int area = INT_MIN;
        for(int i=0; i<n; i++){
            int l = heights[i];
            if(next[i] == -1)
            next[i] = n;
            int b = next[i] - prev[i] - 1;
            area = max(area , l*b);
        }
        return area;
    }
    public:
    int maxArea(vector<vector<int>> M , int n , int m){
        // compute the area of first row
        int area = LargestRectangularArea(M[0] , m);

        for(int i=1; i<n; i++){
            for(int j=0; j<m; j++){

                //row update : by adding previous row's value
                if(M[i][j] != 0)
                    M[i][j] = M[i][j] + M[i-1][j];
                else
                    M[i][j] = 0;
            }
            // entire row is updated now
            area = max(area, LargestRectangularArea(M[i] , m));
        }
        return area;
    }
};

int main(){
    Solution s;
    vector<vector<int>> vec = {{0,1,1,0},{1,1,1,1},{1,1,1,1},{1,1,0,0}};
    cout << "maximum area of a rectangle formed only of 1s in the given matrix is : "
       << s.maxArea(vec, vec[0].size() , vec.size());
    
}
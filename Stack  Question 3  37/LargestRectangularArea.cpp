// Time complexity = O(N);
// space complexity = O(N);

#include<bits/stdc++.h>
using namespace std;

class Solution{
    private:
    vector<int> nextSmallerElement(vector<int> heights , int n){
        vector<int> ans(n);
        stack<int> s;
        s.push(-1);
        for(int i=n-1; i>=0; i--){
            int curr = heights[i];
            while(s.top() != -1 && heights[s.top()] >= curr){
                s.pop();
            }
            ans[i] = s.top();
            s.push(i); 
        }
        return ans;
    }

    vector<int> prevSmallerElement(vector<int> heights , int n){
        vector<int> ans(n);
        stack<int> s;
        s.push(-1);
        for(int i=0; i<n; i++){
            int curr = heights[i];
            while(s.top() != -1 && heights[s.top()] >= curr){
                s.pop();
            }
            ans[i] = s.top();
            s.push(i);
        }
        return ans;
    }

    public:
    int largestRectangleArea(vector<int>& heights){
        int n = heights.size();

        vector<int> next(n);
        next = nextSmallerElement(heights , n);

        vector<int> prev(n);
        prev = prevSmallerElement(heights , n);

        int area = INT_MIN;
        for(int i=0; i<n; i++){
            int l = heights[i];

            if(next[i] == -1){
                next[i] = n;     // Important  line (must see);
            }

            int b = next[i] - prev[i] - 1;
            int newArea = l*b;
            area = max(area , newArea);
        }
        return area;
    }
};

int main(){
    Solution s;
    int n = 2;
    vector<int> vec = {2,4};
    int area = s.largestRectangleArea(vec);
    cout << "Maximum area is : " << area << endl;
    vector<int> vec2 = {2,3,3,2};
    cout << s.largestRectangleArea(vec2 );
}
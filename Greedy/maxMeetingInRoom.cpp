#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution{
    static bool cmp(pair<int,int> a, pair<int,int> b){
        return a.second < b.second;
    }
    public:

    int maxMetting(int st[] , int et[] , int size){
        vector<pair<int , int>> temp;
        for(int i=0; i<size; i++){
            temp.push_back(make_pair(st[i] , et[i]));
        }

        sort(temp.begin() , temp.end() , cmp);
        int e = temp[0].second;
        int cnt = 1;
        for(int i=0; i<size-1; i++){
            int s = temp[i+1].first;
            if(e < s){
                cnt++;
                e = temp[i+1].second;
            }
        }
        return cnt;
    }
}st;

int main(){
    int size = 6;
    int startTime[] = {1,3,0,5,8,9};
    int endTime[] = {2,4,6,7,9,9};

    

    int count = st.maxMetting(startTime , endTime , size);

    cout << count << endl;
}

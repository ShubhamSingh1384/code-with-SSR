#include<bits/stdc++.h>
using namespace std;
int main(){
    string s = "shubham";
    int mid = s.size() / 2;
    cout<<s[6]<<endl;
    //cout << s.substr(1,2) << endl;
    string n = s.substr(0,2) + s.substr(4);
    cout<<n<<endl;
    cout<<n[3]<<endl;
    sort(n.begin() , n.end()); 
    cout<<n<<endl;
    return 0;
}
// 1 key will point to 1 value;
#include<iostream>
#include<map>
using namespace std;
int main(){
    map<int,string> m;

    m[1] = "babbar";
    m[13] = "kumar";
    m[2] = "love";

    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }cout<<endl;

    m.insert({5,"bheem"});
    // m.insert({4,"bhola"});

    cout<<"before erase : "<<endl;

    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }
    cout<<endl;

    cout<<"finding -13 : "<<m.count(-13)<<endl;
    cout<<"finding 13 : "<<m.count(13)<<endl;

    m.erase(13);
    cout<<"after erase : \n";

    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }
    cout<<endl;

    auto it = m.find(5); // es ka exact mtlb kya hai;

    for(auto i=it; i != m.end(); i++){
        cout<<(*i).first<<endl;
    }
}
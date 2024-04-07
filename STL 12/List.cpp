//
#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int> l;
    list<int> n(5 , 100);
    for(int i:n){
        cout<<i<<" ";
    }
    cout<<endl;

    l.push_back(1);
    l.push_front(2);

    list<int> copyl(l);   //To copy list;
    for(int i:copyl){ 
        cout<<i<<" ";
    }
    cout<<endl;

    for(int i:l){
        cout<<i<<" ";
    }
    cout<<endl;

    l.erase(l.begin());
    cout<<"after erase : "<<endl;
    for(int i:l){
        cout<<i<<" ";
    }
    cout<<endl;
}
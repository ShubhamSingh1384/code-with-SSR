// Vector --> It is very useful because it can double its space when full 
//(while this process it copy its previous vector in new vector ans delete previous vector)
//            It is a dinamically operation;
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;

    cout<<"Capacity --> "<<v.capacity()<<endl;
    cout<<"Size --> "<<v.size()<<endl;

    v.push_back(1);
    cout<<"Capacity --> "<<v.capacity()<<endl;
    cout<<"Size --> "<<v.size()<<endl;

    v.push_back(2);
    cout<<"Capacity --> "<<v.capacity()<<endl;
    cout<<"Size --> "<<v.size()<<endl;

    v.push_back(3);
    cout<<"Capacity --> "<<v.capacity()<<endl;
    cout<<"Size --> "<<v.size()<<endl;

    cout<<"Element at 2nd index : "<<v.at(2)<<endl;

    cout<<"Front : "<<v.front()<<endl;
    cout<<"Back : "<<v.back()<<endl;

    cout<<"Before pop"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;
    v.pop_back();
    cout<<"After pop"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"Before clear size : "<<v.size()<<endl;
    v.clear();
    cout<<"After clear size : "<<v.size()<<endl;

    // Coping vector in other vector
    // Given vector is vector<int> a(5,1);
    vector<int> a(5,1);
    for(int i:a){
        cout<<i<<" ";
    }
    cout<<endl<<"After copy in vector<int> last \n";
    vector<int> last(a);
    for(int i:last){
        cout<<i<<" ";
    }
    cout<<endl;
}
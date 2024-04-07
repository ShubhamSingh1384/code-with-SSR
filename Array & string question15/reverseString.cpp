// For reverse an string length is necessary;
#include<iostream>
using namespace std;

int getLength(char ch[]){
    int count = 0;
    for(int i=0; ch[i] != '\0'; i++){
        count++;
    }
    return count;
}

void reverse(char ch[] , int len){
    int s = 0; 
    int e = len-1;
    while(s<e){
        swap(ch[s++] , ch[e--]);
    }
}

int main(){
    char name[20] = {'s','h','u'};
    
    cout<<"Your name is : "<<name<<endl;

    int length = getLength(name);
    cout<<"Length : "<<length<<endl;

    reverse(name , length);

    cout<<"Your reversed name is : "<<endl;
    cout<<name<<endl;

    
    return 0;
}

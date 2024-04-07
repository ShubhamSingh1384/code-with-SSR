#include<iostream>
#include<stack>
using namespace std;

void solve(stack<int> &inputStack , int count , int size){
    // base case 
    if(count == size / 2){
        inputStack.pop();
        return;
    }
    int num = inputStack.top();
    inputStack.pop();

    // Recursive call
    solve(inputStack , count + 1 , size);
    inputStack.push(num);                 //  yaha kuch khas samajh nhi aaya -->(kisi se puch lo);  
    //cout << num << " ";
    
}

int main(){
   stack<int> inputStack;
   inputStack.push(1);
   inputStack.push(2);
   inputStack.push(3);
   inputStack.push(4);
   inputStack.push(5);
   inputStack.push(6);
//    cout << inputStack.top() << endl;
   int count = 0;

   solve(inputStack , count , inputStack.size());

//    for(int i=0; i<inputStack.size(); i++){
//     cout << inputStack.top() << " ";
//     inputStack.pop();
//    }

    // while(!inputStack.empty()){
    //     cout << inputStack.top() << " ";
    //     inputStack.pop();
    // }
}
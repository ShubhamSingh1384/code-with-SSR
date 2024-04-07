#include<iostream>
using namespace std;

struct petrolPump{   // es me array(petrol aur distance) ko kaise set kiya hai ???
    int petrol;
    int distance;
};

class Solution{
    public:

    int tour(petrolPump p[] , int n){
        int shortage = 0;
        int balance = 0;
        int start = 0;

        for(int i=0; i<n; i++){
           balance += p[i].petrol - p[i].distance;
           if(balance < 0){
               shortage += balance;
               start = i + 1;
               balance = 0;
            }
        }
        if(shortage + balance >= 0){
            return start;
        }

        return -1;
    }
};
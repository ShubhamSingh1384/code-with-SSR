// Sieve of erathosthenes;
// time complexity :- O(n*log(log n)) --> Tailor series

#include<iostream>
#include<vector>
using namespace std;

int countPrime(int n){
    int cnt = 0;
    vector<bool> prime(n+1, true);// why (n+1) use instead of n; --> Do dry run bAbY

    prime[0] = prime[1] = false;

    for(int i=2; i<n; i++){ // here find prime number excluding 0 and n;
        if(prime[i]){
            cnt++;
            for(int j=2*i; j<n; j+=i){
                prime[j] = false;
            }
        }
    }
    return cnt;
}

int main(){
    int n;
    cin>>n;
    cout<<"Prime number between 0 to "<<n<<" is : "<<countPrime(n);
}
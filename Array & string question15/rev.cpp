#include <iostream>
using namespace std;
int main(){
    int s = 10;
    string ans = to_string(s);
    cout << ans;
    string a = "shu";
    a[1] = ans;
    cout << a;

   return 0;
}
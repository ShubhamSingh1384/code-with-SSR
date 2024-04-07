#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int a;
    long l;
    char ch;
    float f;
    double d;

    cin >> a >> l >> ch >> f >> d;

    cout << a << "\n" << fixed << l << "\n" << ch << "\n" << setprecision(3) << f << "\n" << setprecision(9) << d << "\n";

} 
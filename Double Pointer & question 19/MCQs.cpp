//doubt in function 3;
#include<iostream>
using namespace std;

// // from line 116
// void update(int *p){
//     *p = (*p) * 2;
// }

// // from line 122
// void fun(int arr[]){
//     cout << arr[0] << " ";
// }

// // from line 128 -> Not Understand
// void update(int *p){
//     int a = 70;
//     p = &a;
//     *p = (*p) * (*p);
//     //cout << b << endl;
// }

// // from line 150
// void increment(int **p){
//     ++(**p);
// }

int main(){
    // int first = 6;
    // int *p = &first;
    // int *q = p;
    // (*q)++;
    // cout<<first<<endl;
    // // ans = 7;

    // int first = 8;
    // int *p = &first;
    // cout<< (*p)++ << " " << first << endl;
    // // ans = 8  9;

    // int *p = 0;
    // int first = 110;
    // *p = first;// use  p = &first; to change the value of *p;
    // cout << *p << endl;
    // // ans = segmental fault -> if we initialize int *p = 0 , to change the value of *p (p = &i)

    // int *p = 0;
    // int first = 110;
    // p = &first;
    // *p = 500;   
    // cout << *p << endl; //// pointer me ek bar address daal k ham address k help
    // ans = 500;          // se data manipulate kr skte hai(bina address dale nhi)
    

    // int first =  8;
    // int second = 11;
    // int *third = &second;
    // first = *third;
    // *third = *third + 2;
    // cout << first << " " << second << endl;
    //  // ans = 11  13;

    // float f = 12.5;
    // float p = 21.5;
    // float *ptr = &f;
    // (*ptr)++;
    // *ptr = p;
    // cout<< *ptr << " " << f <<" " << p << endl;
    // // ans = 21.5 21.5 21.5

    // int arr[5];
    // int *ptr;
    // cout << sizeof(arr) << " " << sizeof(ptr) << endl;
    // // ans 20 , 4 -> Bhaiya ka sizeof(ptr) = 8 aata hai pr mera sizeof(ptr)  =  4 aata hai aisha kya ?

    // int arr[] = {11, 21, 13, 14};
    // cout << *(arr) << " " << *(arr+1) << endl;
    // // ans = 11 , 21

    // int arr[6] = {11, 12, 31};
    // cout << arr << " " << &arr << endl;
    // // ans = Both give same address;

    // int arr[6] = {11, 21, 31};
    // cout << (arr + 1) << " " << &arr[1] << endl;
    // // ans = address at arr[1] in both cases;

    // int arr[6] = {11, 21, 31};
    // int *p = arr;
    // cout << p[2] << endl;
    // // ans = 31; -> p[2] = *(p+2);

    // int arr[] = {11, 12, 13, 14, 15};
    // cout << *(arr) << " " << *(arr+3) << endl;
    // // ans = 11 , 14;

    // int arr[] = {11, 21, 31, 41};
    // int *ptr = arr++; // simple table cannot be updated;
    // cout << *ptr << endl;
    // // segmantal fault -> array can not be updated

    // char ch = 'a';
    // char *ptr = &ch;
    // ch++;
    // cout << *ptr << endl ;
    // // ans = b;

    // // in case of character array it is different from integer array
    // char arr[] = "abcde";
    // char *p = &arr[0];
    // cout << p << endl; // address me pura print krta hai aur valur me sirf value ;
    // // ans = abcde  -> in char array while we print address it print whole array from the given index;

    // char arr[] = "abcde";
    // char *p = &arr[0];
    // p++;
    // cout << p << endl;
    // // ans = bcde -> address + 1 

    // char str[] = "babbar"; 
    // char *p = str; // here cannot use &str like integer; write &str[i]; ( i is any index);
    // cout << str[0] << " " << p[0] << endl;
    // // ans = b , b;

    // // 1st function
    // int i = 10;
    // update(&i);
    // cout << i << endl;
    // // ans = 20;

    // // 2nd function
    // int arr[] = {11, 12, 13, 14};
    // fun(arr + 1);
    // cout << arr[0] << endl;
    // // ans = 12  , 11

    // // 3rd function
    // int a = 10;
    // update(&a);
    // cout << a << endl;
    // // ans = not understand;

    // int first = 110;
    // int *p = &first;
    // int **q = &p;
    // int second = (**q)++ + 9; // yaaaaaaaaaaaaaaaaadddddddddddd rakho 4++ mtlb pahle use hota hai phir increment hota hai
    // cout << first << " " << second << endl;
    // // ans = 111 , 119;

    // int first = 100;
    // int *p = &first;
    // int **q = &p ;
    // int second = ++(**q);
    // int *r = *q;
    // ++(*r);
    // cout << first << " " << second << endl;
    // // ans = 102 , 101;

    // // 4th function
    // int num = 110;
    // int *ptr = &num;
    // increment(&ptr);
    // cout << num << endl;
    // // ans = 111;

}
// Reverse the array;
#include <iostream>
using namespace std;
void reverse(int arr[], int size)
{
    for (int i = size - 1; i >= 0; i--)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[5] = {17, 22, 34, 43, 54};
    reverse(arr, 5);
}
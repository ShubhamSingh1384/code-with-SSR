// swap alternate
#include <iostream>
using namespace std;
void swaparray(int arr[], int size)
{
    for (int i = 0; i < size; i += 2)
    {

        if (i + 1 < size) // important condition
        {
            swap(arr[i], arr[i + 1]);
        }
    }
}
void print(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int even[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int odd[] = {1, 2, 3, 4, 5, 6, 7};

    swaparray(even, 8);
    print(even, 8);
    swaparray(odd, 7);
    print(odd, 7);
}
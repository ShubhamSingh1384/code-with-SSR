// Swap alternate (arr[] = {1,2,3,4,5} into arr[]={2,1,4,3,5})
#include <iostream>
using namespace std;
void swapalternate(int arr[], int size)
{
    if (size % 2 == 0)
    {
        for (int i = 0; i < size; i += 2)
        {
            int j = i;
            swap(arr[j], arr[j + 1]);
        }
    }
    else
    {
        for (int i = 0; i < size-1; i += 2)
        {
            int j = i;
            swap(arr[j], arr[j + 1]);
        }
    }
}
void print(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout<<endl;
}
int main()
{
    int num[] = {1, 2, 3, 4, 5};
    int num1[]={1,2,3,4,5,6};

    swapalternate(num, 5);
    swapalternate(num1 , 6);

    print(num, 5);
    print(num1 , 6);
}
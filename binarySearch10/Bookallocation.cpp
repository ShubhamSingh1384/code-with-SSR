/*
Each student gets at least one book .
Each book should be allocated to a student.  --> ye line sahi hai
Book allocation should be in a contiguous manner.
You have to allocate the book to 'm' students such that the maximum number of pages assigned to a student is mininum.
*/
#include <iostream>
using namespace std;

bool IsPossible(int arr[], int book, int student, int mid)
{
    int studentCount = 1;
    int pageSum = 0;

    for (int i = 0; i < book; i++)
    {
        if (pageSum + arr[i] <= mid)
        {
            pageSum += arr[i];
        }
        else
        {
            studentCount++;
            if (studentCount > student || arr[i] > mid)
            {
                return false;
            }
            pageSum = arr[i];
        }
    }
    return true;
}

int allocateBooks(int arr[], int book, int student)
{
    if(book < student) return -1;

    int start = 0;
    int sum = 0;
    for (int i = 0; i < book; i++)
    {
        sum += arr[i];
    }
    int end = sum;
    int ans = -1;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (IsPossible(arr, book, student, mid))
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

int main()
{
    int arr[] = {10,20,30,40};
    
    cout <<"Greaster minimum number is : " << allocateBooks(arr, 4, 4);
}
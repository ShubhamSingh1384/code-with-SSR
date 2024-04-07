#include <iostream>
using namespace std;
// Function to heapify a subtree rooted at given index
// n is the size of the heap
void heapify(int arr[], int n, int i) {
    int largest = i;  // Initialize largest as root
    int left = 2 * i + 1;  // Left child
    int right = 2 * i + 2; // Right child

    // If left child is larger than root
    if (left < n && arr[left] > arr[largest])
        largest = left;

    // If right child is larger than current largest
    if (right < n && arr[right] > arr[largest])
        largest = right;

    // If largest is not root
    if (largest != i) {
        swap(arr[i], arr[largest]);

        // Recursively heapify the affected sub-tree
        heapify(arr, n, largest);
    }
}

// Main function to perform heap sort
// void heapSort(int arr[], int n) {
//     // Build max heap (rearrange elements)
//     for (int i = n / 2 - 1; i >= 0; i--)
//         heapify(arr, n, i);

//     // Extract elements from the heap one by one
//     for (int i = n - 1; i > 0; i--) {
//         // Move current root to end
//         swap(arr[0], arr[i]);

//         // Call max heapify on the reduced heap
//         heapify(arr, i, 0);
//     }
// }

// Utility function to print an array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
    cout << "\n";
}

int main() {
    int arr[] = {1,2,3,4,5,6};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    printArray(arr, n);

    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);
    

    cout << "Sorted array: ";
    printArray(arr, n);

    return 0;
}

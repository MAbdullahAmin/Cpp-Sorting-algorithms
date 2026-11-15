
#include <iostream>
using namespace std;

void countingSort(int arr[], int size) {
    int max = arr[0];
    // Find maximum element
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    // Create count array
    int count[100] = {0};

    // Count frequency of each element
    for (int i = 0; i < size; i++) {
        count[arr[i]]++;
    }

    // Place elements back in sorted order
    int index = 0;
    for (int i = 0; i <= max; i++) {

        while (count[i] > 0) {
            arr[index] = i;
            index++;
            count[i]--;
        }
    }
}

int main() {
    int arr[10] = {7, 4, 9, 10, 2, 1, 3, 5, 6, 8};
    int size = 10;
    countingSort(arr, size);
    cout << "Sorted Array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
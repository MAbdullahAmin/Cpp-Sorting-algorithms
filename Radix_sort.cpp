
#include <iostream>
using namespace std;

int getMax(int arr[], int size) {
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

void countingSort(int arr[], int size, int place) {
    int output[10];
    int count[10] = {0};

    // Count digit frequencies
    for (int i = 0; i < size; i++) {
        int digit = (arr[i] / place) % 10;
        count[digit]++;
    }

    // Calculate cumulative count
    for (int i = 1; i < 10; i++) {
        count[i] += count[i - 1];
    }

    // Build output array
    for (int i = size - 1; i >= 0; i--) {
        int digit = (arr[i] / place) % 10;
        output[count[digit] - 1] = arr[i];
        count[digit]--;
    }
    // Copy output into original array
    for (int i = 0; i < size; i++) {
        arr[i] = output[i];
    }
}
void radixSort(int arr[], int size) {
    int max = getMax(arr, size);
    for (int place = 1; max / place > 0; place *= 10) {
        countingSort(arr, size, place);
    }
}

int main() {
    int arr[10] = {7, 4, 9, 10, 2, 1, 3, 5, 6, 8};
    int size = 10;
    radixSort(arr, size);
    cout << "Sorted Array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}

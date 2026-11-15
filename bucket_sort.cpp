
#include <iostream>
using namespace std;

void bucketSort(int arr[], int size) {

    int bucket[10][10] = {0};
    int count[10] = {0};
    // Put elements into buckets
    for (int i = 0; i < size; i++) {
        int index = arr[i] / 10;

        bucket[index][count[index]] = arr[i];

        count[index]++;
    }
    // Sort each bucket using Bubble Sort
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < count[i] - 1; j++) {
            for (int k = 0; k < count[i] - j - 1; k++) {
                if (bucket[i][k] > bucket[i][k + 1]) {
                    int temp = bucket[i][k];
                    bucket[i][k] = bucket[i][k + 1];
                    bucket[i][k + 1] = temp;
                }
            }
        }
    }
    // Combine all buckets
    int index = 0;
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < count[i]; j++) {

            arr[index] = bucket[i][j];

            index++;
        }
    }
}

int main() {
    int arr[10] = {7, 4, 9, 10, 2, 1, 3, 5, 6, 8};
    int size = 10;
    bucketSort(arr, size);
    cout << "Sorted Array: ";
    for (int i = 0; i < size; i++) {

        cout << arr[i] << " ";
    }
    return 0;
}

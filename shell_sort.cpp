
#include <iostream>
using namespace std;

void shellSort(int arr[], int size) {
    for (int gap = size / 2; gap > 0; gap = gap / 2) {
        for (int i = gap; i < size; i++) {
            int temp = arr[i];
            int j;
            for (j = i; j >= gap && arr[j - gap] > temp; j = j - gap) {
                arr[j] = arr[j - gap];
            }
            arr[j] = temp;
        }
    }
}
int main() {

    int arr[10] = {7, 4, 9, 10, 2, 1, 3, 5, 6, 8};
    int size = 10;
    shellSort(arr, size);
    cout << "Sorted Array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}

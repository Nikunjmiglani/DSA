//Selection Sort 

//take an array for example [13,46,24,52,20,9], sort in ascending order

#include <iostream>
using namespace std;


void acsenarr(int arr[], int n) {
    for (int i = 0; i <= n - 2; i++) {
        int min = i;
        for (int j = i; j <= n - 1; j++) {
            if (arr[j] < arr[min]) {
                min = j;
            }
        }
        
        swap(arr[min], arr[i]);
    }
}

int main() {
    int arr[] = {13, 46, 24, 52, 20, 9};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    acsenarr(arr, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

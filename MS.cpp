#include <iostream>
#include <vector>
using namespace std;

// Merge function to merge two sorted halves
void merge(vector<int>& arr, int low, int mid, int high) {
    vector<int> temp;
    int left = low;
    int right = mid + 1;

    // Compare elements and merge in sorted order
    while (left <= mid && right <= high) {
        if (arr[left] <= arr[right]) {
            temp.push_back(arr[left]);
            left++;
        } else {
            temp.push_back(arr[right]);
            right++;
        }
    }

    // Copy remaining elements from left half (if any)
    while (left <= mid) {
        temp.push_back(arr[left]);
        left++;
    }

    // Copy remaining elements from right half (if any)
    while (right <= high) {
        temp.push_back(arr[right]);
        right++;
    }

    // Copy merged elements back to original array
    for (int i = low; i <= high; i++) {
        arr[i] = temp[i - low];
    }
}

// Recursive merge sort function
void mergeSort(vector<int>& arr, int low, int high) {
    if (low >= high) return;

    int mid = (low + high) / 2;

    mergeSort(arr, low, mid);         // Sort left half
    mergeSort(arr, mid + 1, high);    // Sort right half
    merge(arr, low, mid, high);       // Merge sorted halves
}

// Helper function to call merge sort
void mergeSort(vector<int>& arr) {
    mergeSort(arr, 0, arr.size() - 1);
}

// Example usage
int main() {
    vector<int> arr = {38, 27, 43, 3, 9, 82, 10};

    cout << "Before sorting: ";
    for (int num : arr) cout << num << " ";
    cout << endl;

    mergeSort(arr);

    cout << "After sorting: ";
    for (int num : arr) cout << num << " ";
    cout << endl;

    return 0;
}

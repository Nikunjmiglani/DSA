

#include <iostream>
#include <vector>
#include <algorithm> 
using namespace std;

void leftRotate(vector<int>& arr, int d) {
    int n = arr.size();
    if (n == 0) return;
    d = d % n; 

  
    reverse(arr.begin(), arr.begin() + d);
   
    reverse(arr.begin() + d, arr.end());
    
    reverse(arr.begin(), arr.end());
}

int main() {
    int n, d;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) cin >> arr[i];

    cout << "Enter d (number of positions to rotate): ";
    cin >> d;

    leftRotate(arr, d);

    cout << "Array after left rotation: ";
    for (int x : arr) cout << x << " ";
    cout << endl;

    return 0;
}

//brute force
#include <iostream>
#include <set>
#include <vector>

using namespace std;

void removeDuplicatesBruteForce(vector<int>& arr) {
    set<int> st;
    
    // First pass: Insert all elements into the set to remove duplicates
    for (int i = 0; i < arr.size(); i++) {
        st.insert(arr[i]);
    }
    
    // Second pass: Overwrite the array with unique elements from the set
    int ind = 0;
    for (auto it = st.begin(); it != st.end(); ++it) {
        arr[ind] = *it;  // Put unique element back to the array
        ind++;
    }
    
    // Resize the array to remove any remaining unused elements
    arr.resize(ind);
}

int main() {
    vector<int> arr = {1, 1, 2, 2, 3, 3, 3};
    
    removeDuplicatesBruteForce(arr);
    
    cout << "Array after removing duplicates: ";
    for (int num : arr) {
        cout << num << " ";
    }
    
    return 0;
}

//optimizeed

#include <iostream>
#include <vector>

using namespace std;

void removeDuplicatesOptimized(vector<int>& arr) {
    if (arr.empty()) return;

    int ind = 1;  // Pointer for the next unique element position
    
    // Loop through the array, starting from the second element
    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] != arr[i - 1]) {  // Found a unique element
            arr[ind] = arr[i];  // Place it in the next unique position
            ind++;
        }
    }
    
    // Resize the array to remove elements after the last unique one
    arr.resize(ind);
}

int main() {
    vector<int> arr = {1, 1, 2, 2, 3, 3, 3};
    
    removeDuplicatesOptimized(arr);
    
    cout << "Array after removing duplicates: ";
    for (int num : arr) {
        cout << num << " ";
    }
    
    return 0;
}


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

 int removeDuplicates(vector<int>& arr) {
        if(arr.empty()) 
        return 0;
        int ind =1;

        for(int i =1;i<arr.size();i++){
            if(arr[i] != arr[i-1]){
                arr[ind] = arr[i];
                ind++;
            }
        }
        arr.resize(ind);
        return ind;
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


    
    return 0;
}



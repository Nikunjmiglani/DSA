#include <bits/stdc++.h>
using namespace std;

vector<int> intersectedarray(vector<int> a, vector<int> b) { //assumes sorted array is sorted not give then sort first
    /*
     sort(nums1.begin(), nums1.end());
     sort(nums2.begin(), nums2.end());
    */
    int i = 0; 
    j = 0;
    int n = a.size();
    int m = b.size();
    vector<int> ans;

    while (i < n && j < m) {
        if (a[i] < b[j]) {
            i++;
        }
        else if (b[j] < a[i]) {
            j++;
        }
        else { 
            if (ans.empty() || ans.back() != a[i]) {
                ans.push_back(a[i]);
            }
            i++;
            j++;
        }
    }
    return ans;
}


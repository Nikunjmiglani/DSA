//single element appear twice find

int findDuplicate(vector<int> &arr)
{
    int ans = 0;

    // Step 1: XOR all elements in the array
    for(int i = 0; i < arr.size(); i++) {
        ans = ans ^ arr[i];
    }

    // Step 2: XOR all numbers from 1 to n
    for(int i = 1; i < arr.size(); i++) {
        ans = ans ^ i;
    }

    return ans;
}

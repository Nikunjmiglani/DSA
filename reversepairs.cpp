class Solution {
public:
       int merge(vector<int>&arr, int low, int mid, int high){
        int right = mid+1;
        int left = low;
        vector<int> temp;

        while(left<=mid && right<=high){
            if(arr[left] < arr[right]){
                temp.push_back(arr[left]);
                left++;
            }
            else{
                temp.push_back(arr[right]);
                right++;
            }
        }

        while(left<=mid){
            temp.push_back(arr[left]);
            left++;
        }
        while(right<=high){
            temp.push_back(arr[right]);
            right++;
        }
        for(int i = low; i <= high; i++) {
            arr[i] = temp[i - low];
        }
          return 0;

        }

        int countpairs(vector<int>&arr, int low, int mid, int high){
            int right = mid+1;
            int cnt =0;
            for(int i =low;i<=mid;i++){
            while(right<=high && arr[i] > 2LL *arr[right]){
                right++;}
                cnt=cnt+(right - (mid+1));
            }
            return cnt;
        }

         int mergeSort(vector<int>& arr, int low, int high) {
        if(low >= high) return 0;

        int mid = (low + high) / 2;
        int cnt = 0;

        cnt += mergeSort(arr, low, mid);
        cnt += mergeSort(arr, mid + 1, high);
        cnt += countpairs(arr, low, mid, high);

        merge(arr, low, mid, high);

        return cnt;
    }


    int reversePairs(vector<int>& nums) {
        return mergeSort(nums, 0, nums.size() - 1);
    }
};

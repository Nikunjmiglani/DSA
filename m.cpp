//finding unique element in an array(only function)

int findunique(int arr[], int n){
    int ans = 0 ;
    for(int i =0;i<n:i++){
         ans = ans^arr[i];

    }
    return ans;
}
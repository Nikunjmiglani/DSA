//swap alternate elements an array
#include <iostream>
using namespace std;

void SwapArray(int arr[], int size){
    for(int i =0;i<size;i+=2){
        if(i+1<size){
            swap(arr[i], arr[i+1]);
        }
    }
}

void printArray(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }

}

int main(){
    int even[8] = {9,8,7,6,5,4,3,2};
    int odd[9] = {9,8,7,6,5,4,3,2,1};
    SwapArray(even, 8);
  

    printArray(even,8);
}
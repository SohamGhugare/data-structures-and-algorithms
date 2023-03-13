#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n);

int main(){
    int arr[5] = {10, 7, 14, 9, 6};
    bubbleSort(arr, 5);
    for(int i=0; i<5; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

void bubbleSort(int arr[], int n){
    for(int i=1; i<n; i++){
        for(int j=0; j<n-i; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }
}
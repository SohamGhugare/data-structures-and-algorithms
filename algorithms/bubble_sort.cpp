#include <iostream>
using namespace std;

void bubbleSort(int &arr, int n);

void main(){
    int arr[5] = {10, 7, 14, 9, 6};
    bubbleSort(&arr, 5);

}

void bubbleSort(int &arr, int n){
    for(int i=1; i<n; i++){
        for(int j=0; j<n-i; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }
}
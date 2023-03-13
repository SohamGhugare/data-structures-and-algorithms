/*
<<------ SELECTION SORT ------>>
Selection sort basically sorts the array by selecting the smallest element and putting it at its correct place.

Approach:
The approach here is to place the smallest element to the start of the array and repeat the same till the array is sorted. 

Time Complexity:
    Best Case: 
    Worst Case: 
    

Space Complexity: 
*/

#include <iostream>
using namespace std;

void selectionSort(int arr[], int n){
    for(int i=0; i<n-1; i++){
        int minIndex=i;

        for(int j=i+1; j<n; j++){
            if(arr[j]<arr[minIndex])
                minIndex=j;
        }

        swap(arr[minIndex], arr[i]);
    }
}

// Driver Code
int main(){
    int arr[5] = {10, 7, 14, 9, 6};
    selectionSort(arr, 5);
    for(int i=0; i<5; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
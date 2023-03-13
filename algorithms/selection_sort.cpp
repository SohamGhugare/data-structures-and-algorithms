/*
<<------ SELECTION SORT ------>>
Selection sort basically sorts the array by selecting the smallest element and putting it at its correct place.

Approach:
The approach here is to place the smallest element to the start of the array and repeat the same till the array is sorted. 

Time Complexity:
    Best Case: O(n^2)
    Worst Case: O(n^2)
    

Space Complexity: O(1)
*/

#include <iostream>
using namespace std;

void selectionSort(int arr[], int n){
    /*
    Outer loop for selecting an element for swapping.
    This loop will run till (n-2)th index since the array will already be sorted till we reach the last (n-1)th element.
    */
    for(int i=0; i<n-1; i++){
        // Selecting the first element in the running array as the minimum element
        int minIndex=i;

        /*
        The inner loop will be executed on the array from the element next to the selected element till the last element.
        We will find the smallest number in this array and assign it to minIndex.
        */
        for(int j=i+1; j<n; j++){
            if(arr[j]<arr[minIndex])
                minIndex=j;
        }

        // Swapping the element with the selected smallest element.
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
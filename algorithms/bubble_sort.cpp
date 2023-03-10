/*
<<------ BUBBLE SORT ------>>
Bubble sort basically just sorts the array by swapping two adjacent elements. 

Approach: 
The main approach here is to send the nth largest element in the array to the end of the array in the nth iteration till the whole array is sorted. 

Time Complexity:
    Best Case: O(n) (Array is already sorted)
    Worst Case: O(n^2)
    (since we are running two `for` loops and comparing all n elements)

Space Complexity: O(1)
*/

#include <iostream>
using namespace std;

// Bubble Sort Code
void bubbleSort(int arr[], int n){
    // Adding a flag that will be switched every time we encounter a swap.
    bool swapped = false;

    /*
    Outer loop for going thru n-1 iterations. We are comparing & swapping two elements at a time so we can skip one iteration.
    */
    for(int i=1; i<n; i++){

        /*
        Inner loop for processing elements till the (n-i) th index.
        Why (n-i)? 
        Because the last elemet after the iteration will always be the nth largest element. 
        So there's no need to process the nth element again. 
        */  
        for(int j=0; j<n-i; j++){
            // Compare the jth and its adjacent element and swap them if needed.
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
                swapped = true;
            }
        }

        /*
        If there's no swap occuring in the array, we will break out of the loop since the array is already sorted at this point.
        (Optimization)
        */
       if(swapped==false)
        break;
    }
}

// Driver Code
int main(){
    int arr[5] = {10, 7, 14, 9, 6};
    bubbleSort(arr, 5);
    for(int i=0; i<5; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}


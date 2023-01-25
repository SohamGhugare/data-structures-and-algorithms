// Given an integer array and another integer element. The task is to find if the given element is present in array or not.

#include <iostream>
using namespace std;

// Solution 
class Solution{
    public:
    // Function to search x in arr
    // arr: input array
    // X: element to be searched for
    int search(int arr[], int N, int X)
    {
        int found = -1;
        for(int i=0; i<N; i++){
            if(arr[i]==X){
                found=i;
                break;
            };
        }
        return found;
        
    }

};

//{ Driver Code

int main()
{
    int testcases;
    cin>>testcases;
    while(testcases--)
    {
        int sizeOfArray;
        cin>>sizeOfArray;
        int arr[sizeOfArray];
        int x;
        
        for(int i=0;i<sizeOfArray;i++)
        {
            cin>>arr[i];
        }
        cin>>x;
        Solution ob;
        cout<<ob.search(arr,sizeOfArray,x)<<endl; //Linear search
    }

    return 0;
    
}

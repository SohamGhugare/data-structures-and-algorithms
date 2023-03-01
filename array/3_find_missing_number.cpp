// Given an array of size N-1 such that it only contains distinct integers in the range of 1 to N. Find the missing element.

// Input format
// Line 1: Number of test cases
// Line 2: Length of array N
// Line 3: N space separated integers

#include <iostream>
#include <vector>
using namespace std;

class Solution{
  public:
    int MissingNumber(vector<int>& array, int n) {
        int reqSum = (n*(n+1))/2;
        int actualSum = 0;
        for(int i=0; i<n-1; i++){
            actualSum+=array[i];
        }
        return reqSum-actualSum;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> array(n - 1);
        for (int i = 0; i < n - 1; ++i) cin >> array[i];
        Solution obj;
        cout << obj.MissingNumber(array, n) << "\n";
    }
    return 0;
}
// } Driver Code Ends
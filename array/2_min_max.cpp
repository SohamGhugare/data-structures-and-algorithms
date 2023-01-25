// Given an array A of size N of integers. Your task is to find the minimum and maximum elements in the array.

// Input format
// Line 1: Number of test cases
// Line 2: Length of array N
// Line 3: N space separated integers

#include <iostream>
using namespace std;
#define ll long long

// Solution
pair<long long, long long> getMinMax(long long a[], int n) {
    // Initializing max and min to first elements in the array
    int max = a[0];
    int min = a[0];
    for (int i = 0; i < n; i++) {
        // Checking if number is greater than current max
        if(a[i]>max) max=a[i];
        
        // Checking if number is smaller than current min
        if(a[i]<min) min=a[i];
        
    }
    return make_pair(min, max);
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        ll a[n];
        for (int i = 0; i < n; i++) cin >> a[i];

        pair<ll, ll> pp = getMinMax(a, n);

        cout << pp.first << " " << pp.second << endl;
    }
    return 0;
}
// } Driver Code Ends

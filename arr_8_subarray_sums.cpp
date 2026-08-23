#include <iostream>
#include <climits>
using namespace std;

// Brute-force approach: checks every possible subarray and calculates its sum.
void maxsubarraysum1(int *arr, int n){cout << "\n";
    int maxsum = INT_MIN ; // Supports arrays whose elements are all negative.
    for ( int start=0 ; start < n ; start++ ){
        for (int end = start ; end < n ; end++ ){
            int currsum = 0; // Sum of the current subarray from start to end.
            for ( int i = start ; i <= end ; i++ ){
                currsum += arr[i];
            }
            
            maxsum = max( maxsum , currsum);
        }
        
    }
    cout << "maximum sum from brute force alogoritm of subarrays is =  " << maxsum <<"\n";
}

// Improved brute-force approach: reuses the previous sum when extending a subarray.
void maxsubarraysum2(int *arr, int n){
    int maxsum = INT_MIN; // Supports arrays whose elements are all negative.
    for (int start = 0 ; start < n ; start++ ){
        int currsum = 0; // Running sum for subarrays beginning at start.
        for ( int end = start; end < n; end++){
            currsum += arr [end]; 
            maxsum = max(maxsum, currsum);
        }
        
    }
    cout << "max subarray sum after optimsaed brute force alogoritm = " << maxsum <<"\n";
}

// Kadane's algorithm: finds the maximum subarray sum in O(n) time.
void maxsubarraysum3(int *arr, int n){
    int maxsum = INT_MIN ; // Best sum found so far.
    int currsum= 0;
    for (int start = 0 ; start < n ; start++){
        currsum += arr [start];
        maxsum = max(currsum,maxsum);
        // A negative sum cannot improve a future subarray, so start over.
        if (currsum<0){
            currsum = 0;
        }
    }
    cout << "maximum subarray sum kadanes algorithm; " << maxsum <<"\n";
}

int main (){
    // Example array used to test all three approaches.
    int arr[6] = {2, -3, 6, -5, 4, 2};
    int n = sizeof(arr)/sizeof(arr[0]);
    maxsubarraysum1( arr , n);
    maxsubarraysum2( arr , n);
    maxsubarraysum3( arr , n);
}
#include <iostream>
using namespace std;

// Unoptimal method: use a second array to reverse the elements
void unoptimal(int n, int arr[], int carrr[]) {
    // Copy reversed elements into new array
    for (int i = 0; i < n; i++) {
        int x = n - i - 1;
        carrr[i] = arr[x];
    }

    // Copy reversed elements back into original array
    for (int i = 0; i < n; i++) {
        arr[i] = carrr[i];
    }

    cout << "Reversed using extra array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Optimal method: reverse in place using two pointers
// This avoids extra space and works in O(n) time
void optimal(int arr[], int n) {
    int start = 0;      // first index of array
    int end = n - 1;    // last index of array

    while (end > start) {
        // swap the values at start and end index
        swap(arr[start], arr[end]);
        start++;   // move start forward
        end--;     // move end backward
    }

    cout << "Reversed using optimal method: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    // Original array
    int arr[] = {5, 4, 3, 9, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Extra array for unoptimal method
    int carrr[n];

    int x;
    cout << "enter 1 for unoptimal or 2 for optimal: ";
    cin >> x;

    if (x == 1) {
        unoptimal(n, arr, carrr);
    } else if (x == 2) {
        optimal(arr, n);
    } else {
        cout << "Invalid choice!" << endl;
    }

    return 0;
}
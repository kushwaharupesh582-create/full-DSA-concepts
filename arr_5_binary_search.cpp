#include <iostream>
using namespace std;

int binary_search (int arr[], int key , int n){
    int str = 0;
    int end = n - 1;
    while (str <= end){
        int mid = (str + end) / 2;
        if ( arr[mid] == key ){
            return mid ;
        }
        else if ( arr[mid] < key ){
            str = mid + 1 ;
        }
        else if ( arr[mid] > key){
            end = mid - 1 ;
        }
    }
    return -1;
}

//main

int main(){
    int arr[11]={1,2,3,4,6,7,8,10,12,13,16};
    int key;
    cout << "enter value to be searched in {1,2,3,4,6,7,8,10,12,13,16}: ";
    cin >> key ;
    int n = sizeof(arr)/sizeof(arr[0]);
    int value = binary_search(arr, key, n);
    if (value != -1)
        cout << "Element found at index: " << value;
    else
        cout << "Element not found";
    return 0 ;
}

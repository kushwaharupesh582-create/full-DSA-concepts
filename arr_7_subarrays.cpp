#include <iostream>
using namespace std;

void print_subarray_n(int *arr, int n){
    for (int start = 0 ; start < n ; start ++){
        for (int end = start; end < n ; end ++ ){
            cout << "( " << start << " , " << end << " ) , " ;

        }
        cout << "\n";
    }
}

void print_subarray_all(int *arr, int n){
    for (int start = 0 ; start < n ; start ++){
        for (int end = start ; end < n ; end ++ ){
            for (int i = start ; i < end ; i++){
                cout << " " << arr[i] <<" ";
            }
            cout << ",";
        }
        cout << "\n";
    }
}



int main(){
    int arr[5]={1,2,3,4,5};
    int n = 5;
    print_subarray_n(arr , n) ;
    cout << "\n\n";
    print_subarray_all(arr,n) ;
    return 0 ;
}
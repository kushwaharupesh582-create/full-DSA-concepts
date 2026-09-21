#include<iostream>
using namespace std;
int main(){
    int arr[3][4];
    int n=3 , m=4 ;
    for (int i=0; i<n; i++){
        for (int j=0; j<m ; j++){
            cout<<"enter: ";
            cin >> arr[i][j];
        }
    }
    cout << "matrix created of row: " << n << ", and col: " << m << endl;
    int row=0;
    for (int i=0; i<n; i++){
        
        for (int j=0; j<m ; j++){
            cout<< arr[i][j] << " ";
            
        }
        cout <<endl;
        row+=1;
        
    }
}
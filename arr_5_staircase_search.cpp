#include<iostream>
using namespace std;

bool search ( int mat[][4], int n, int m, int key ){
    int i = 0, j = m-1;

    while ( i < n && j >= 0 ){
        if ( mat[i][j] == key ){
            // key found 
            cout << "found at ( " << i <<", " << j << ")\n";
            return true;
        }
        else if (mat[i][j] > key ){
            // move left 
            j -- ;
        }
        else if (mat[i][j] < key ){
            // move down
            i ++ ;
        }
    }
    cout << "not found the given element \n";
    return false;
}

int main (){
    int matrix [4][4] = {{10,20,30,40},
                         {15,25,35,45},
                         {27,29,37,48},
                         {32,33,38,50}};
    search (matrix, 4, 4, 33);
    return 0;
}
#include<iostream>
using namespace std;

void spiral_matrix (int mat[4][4], int n, int m){
    int srow = 0, scol = 0 ;
    int erow = n-1, ecol = m-1 ; 

    while (srow <= erow && scol <= ecol){
        // top
        for (int j = scol ; j <= ecol ; j++){
            cout << mat [srow][j] << " ";
        }
        // right
        for (int i = srow+1 ; i <= erow ; i++){
            cout << mat [i][ecol] << " ";
        }
        //bottom
        for (int j = ecol-1 ; j >= scol ; j--){
            if (srow == erow){//middle
                break;
            }
            cout << mat [erow][j] << " ";
        }
        // left
        for (int i = erow-1 ; i>= srow+1 ; i--){
            if (scol == ecol){//middle
                break;
            }
            cout << mat [i][scol] << " ";
        }
        srow ++;
        scol ++;
        erow --;
        ecol --;
    }
    cout << endl ;
}

int main (){
    int matrix1[4][4] = {{ 1, 2, 3, 4}, 
                         { 5, 6, 7, 8},
                         { 9,10,11,12},
                         {13,14,15,16}};
    spiral_matrix(matrix1, 4, 4);
    
    int matrix2[5][4] = {{ 1, 2, 3, 4}, 
                         { 5, 6, 7, 8},
                         { 9,10,11,12},
                         {13,14,15,16},
                         {17,18,19,20}};
    spiral_matrix(matrix2, 5, 4);
}
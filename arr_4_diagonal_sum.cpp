#include<iostream>
using namespace std;

// with time complexity n^2
int diagonalSum1(int mat[][5], int n){
    int sum = 0;
    
    for (int i = 0 ; i < n ; i++){ //for rows
        for (int j = 0 ; j < n ; j++){ //forcolumns
            if ( i==j ){  //diagnoal1
                sum += mat[i][j];
            }
            else if ( j == n-i-1 ){ //diagonal2
                sum += mat[i][j];
            }
        }
    }
    cout << "sum of both diagonals are = " << sum;
    return sum;
}

// with time complexity n
int diagonalSum2(int mat[][5], int n){
    int sum = 0;
    
    for (int i = 0 ; i < n ; i++){ //for rows
        sum += mat[i][i];
        if ( i != n-i-1 ){ //diagonal2
                sum += mat[i][n-i-1];
            
        }
    }
    cout << "sum of both diagonals are = " << sum;
    return sum;
}

int main(){
    int matrix1[4][4] ={{1, 2, 3, 4 },
                        {5, 6, 7, 8 },
                        {9, 10,11,12},
                        {13,14,15,16}};

    //diagonalSum1(matrix1, 4); 
    //diagonalSum2(matrix1, 4);

    int matrix2[5][5] ={{1, 2, 3, 4, 5 },
                        {6, 7, 8, 9, 10},
                        {11,12,13,14,15},
                        {16,17,18,19,20},
                        {21,22,23,24,25}};
    
    diagonalSum1(matrix2, 5); //O(n^2)
    diagonalSum2(matrix2, 5); //O(n)
    return 0;   
}
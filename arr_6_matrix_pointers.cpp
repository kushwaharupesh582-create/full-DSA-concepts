#include<iostream>
using namespace std;

void mat_point_1( int mat [][4] , int n, int m ){
    //memeory address ie refrence
    cout << "pointer 1st: " << mat   << endl;
    cout << "pointer 2nd: " << mat+1 << endl;
    cout << "pointer 3rd: " << mat+2 << endl;
    cout << "pointer 4th: " << mat+3 << endl << endl << endl;
    //derefrencing
    cout << "pointer 1st: " << *mat     << endl;           //will show the same as above but have ther meaning as, they carry value of the refrence;
    cout << "pointer 2nd: " << *(mat+1) << endl;           //will show the same as above but have ther meaning as, they carry value of the refrence;
    cout << "pointer 3rd: " << *(mat+2) << endl;           //will show the same as above but have ther meaning as, they carry value of the refrence;
    cout << "pointer 4th: " << *(mat+3) << endl << endl;   //will show the same as above but have ther meaning as, they carry value of the refrence;

    // accessing a particular value using this
    // we use this line [ *(*pointer+i)+j ] where i is the row and j is the column and 
    // pointer is the address of 1st row
    int row=1;
    for (int i=0 ; i<4 ; i++){
        cout << "row " << row << " [ ";
        for (int j=0 ; j<4 ; j++){
            cout << *(*(mat+i)+j) << ",";
        }
        row+=1;
        cout << " ]\n";
    }
}
 
int main(){
    int matrix [4][4]= {{ 1, 2, 3, 4},
                        { 5, 6, 7, 8},
                        { 9,10,11,12},
                        {13,14,15,16}};
    mat_point_1(matrix, 4, 4);              
    return 0 ;               
}
#include <iostream>
using namespace std;

int main(){
    int arr[10]={1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout << sizeof(arr) <<endl;
    // extracting value of array by normal lines :
    cout << arr[0] <<endl;
    cout << arr[1] <<endl;
    cout << arr[2] <<endl;
    cout << arr[3] <<endl;
    cout << arr[4] <<endl;
    cout << arr[5] <<endl;
    cout << arr[6] <<endl;
    cout << arr[7] <<endl;
    cout << arr[8] <<endl;
    cout << arr[9] <<endl;
 
    // now using loops to extract them 

    char vovels[ ]={'a', 'e', 'i', 'o', 'u'};
    cout << sizeof(vovels) <<endl;

    for (int i=0 ; i<=4; i++){   //loop used
        cout << vovels[i] <<endl ;
    }


    // input and output in array using loops

    int array[6];
    for(int x=0 ; x<=5 ; x++){
        cout<< "enter integral values to fill the array : ";
        cin >> array[x];
    }

    for(int i=0; i<= sizeof(array[6])+1; i++){
        cout << endl << array[i];
    }
    
    return 0;
}
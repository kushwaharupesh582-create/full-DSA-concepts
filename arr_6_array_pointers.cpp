#include <iostream>
using namespace std ;
 
int main (){
    int arr[20]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19};

    // increment and decrement operators a++, a--
    int *ptr1 = arr;
    cout << "incremnet by 1 \n";
    cout<<"actual locaion : " << ptr1 << "  new locaion : " << ptr1++ <<"\n";
    cout << "decremnet by 1 \n";
    cout<<"currnet locaion : " << ptr1++ << "  new locaion : " << ptr1-- <<"\n\n";


    // addition, substraction of constants
    int *ptr2 = arr;
    cout << "addition \n" ;
    
    cout <<"actual locaion : " << ptr1 <<"  new locaion : " << ptr1+1 <<"\n";
    cout <<"actual locaion : " << ptr1 <<"  new locaion : " << ptr1+2 <<"\n";
    cout <<"actual locaion : " << ptr1 <<"  new locaion : " << ptr1+3 <<"\n";
    cout <<"actual locaion : " << ptr1 <<"  new locaion : " << ptr1+4 <<"\n";
    cout << "substraction \n" ;
    cout <<"actual locaion : " << ptr1 <<"  new locaion : " << ptr1-1 <<"\n";
    cout <<"actual locaion : " << ptr1 <<"  new locaion : " << ptr1-2 <<"\n";
    cout <<"actual locaion : " << ptr1 <<"  new locaion : " << ptr1-3 <<"\n";
    cout <<"actual locaion : " << ptr1 <<"  new locaion : " << ptr1-4 <<"\n";


    //

    //comparision (<, >, >=, <=, ==)
    
    int *ptr7 = arr;
    int *ptr8 = ptr1 + 3;
    cout << "comparision\n";
    cout << (ptr7 < ptr8) << " true" << "  ";  // 1 for true and 0 for false
    cout << (ptr7 > ptr8) << " false" << "\n";  // 1 for true and 0 for false
    cout << (ptr1==arr) << " false cause some opertaions has been done to modify ptr1" << "\n"; // 1 if yes 0 if no
    return 0;
}

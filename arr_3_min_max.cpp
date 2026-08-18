#include <iostream>
using namespace std;

int max(int x,int marks[]){
    for (int i=0; i<5; i++){
        if (marks[i]>x){
            x=marks[i];
            cout << x << "\n";
        }
        else{
            cout << "no update on index " << marks[i] <<"\n";
        }
        
    }
    cout << "final largest value =  " << x <<"\n";
    return x;
}
               //this is pointer not actual array
int min(int x, int marks[]){
    for (int i=0; i<5; i++){
        if (marks[i]<x){
            x=marks[i];
            cout << x << "\n";
        }
        else{
            cout << "no update on index " << marks[i] <<"\n";
        }
        
    }
    cout << "final smallest value =  " << x <<"\n";
    return x;
}


int main(){
    int marks[5] = {5,4,3,9,11};
    int x= marks[0];
    cout <<"initial value at 0 index   " << x <<"\n";
    int enter ;
    cout << "enter value 1 fro max value, 2 for min value : ";
    cin >> enter ;

    if (enter==1){
        int y = max(x, marks);
    }
    else if (enter==2){
        int z = min(x, marks);
    }
    
    

    
}
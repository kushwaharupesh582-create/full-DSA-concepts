#include <iostream>
#include <cstring>
using namespace std;

void reverse( char word[] , int n ){
    int str = 0;
    int end = n-1;

    while (str < end ){
        swap (word[str], word[end]);
        str++;
        end--;
    }
    
}

int main(){
    char word[] = "hellow" ;
    reverse (word, strlen(word));  // requires <cstring>
    cout << "reversed array = " << word << endl;
    return 0 ; 
}
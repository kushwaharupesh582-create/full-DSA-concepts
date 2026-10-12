#include<iostream>
#include<string>
using namespace std;
bool palindrome(string pal, int n){
    int str=0;
    int end=n-1;
    while (str <= end ){
        if ( pal[str] != pal[end] ){
            cout << "not a palindrome\n";
            return false ;
        }
        else if (pal[str] == pal[end]){
            cout << "iteration successfully checked\n";
        }
        str++;
        end--;   
    }
    cout << "valid palindrome\n";
}

int main(){
    string pal = "ababa";
    int n = 5;
    palindrome(pal, n);
    return 0;
}
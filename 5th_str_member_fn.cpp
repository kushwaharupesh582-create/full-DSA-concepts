#include <iostream >
#include <string>
using namespace std;

int main(){
    string str = "hello world who i am";
    // imp member functions of c++
    
    cout << str.length() << endl ; // finds length
    
    cout << str.at(6) << endl ;    // finds word whose index is passed as  a parameter  

    // creat substring
    string newstr = str.substr(2, 5);
    cout << newstr << endl;

    cout << str.find("who");  // returns the index of 1st occurence of first letter of the word
    cout << str.find("w");
    
    return 0;
}
#include<iostream>
#include<cstring>
using namespace std;

int main() {
    
    //ways to store values in char array

    char work1[] = "code";
    cout << work1 << endl;

    char work2[100] = "code";   //ignores extra spaces
    cout << work2 << endl;  // extra spaces ko ignore krke wo sapces jo use hui hia unki value dega ie :* code * print hoga
    
    char work3[50] = {'c', 'o', 'd', 'e', '\0'}; //while giving input ike this we must use null character 
    cout << work3 << endl;
    
    char work4[] = {'c', 'o', 'd', 'e', '\0'}; 
    cout << work4 << endl;  // apne aap nul character dekh kr ruk jayega and utne hi length ki array bna dega
    
    char work5[10] = {'c', 'o', 'd', 'e'}; // agar null value nhi lgai to random values last me likh dega
    cout << work5 << endl;  // kabhi likhta hai kabhi nhi

    // if we use null character we can also print our length of string using prebuilt strlen() function
    char work[50] = {'h', 'e', 'l', 'l', 'o', '\0'};
    cout << strlen (work) << endl;  // this function will work when header file <cstring> is included
                                    // also ignores \o value ie \0 ko count nhi krega length me
    
    return 0;
}
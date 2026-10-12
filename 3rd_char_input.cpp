#include<iostream>
#include<string>
using namespace std;

int main(){
    
    char sentences[60];
    cout << "enter a sentence with spaces: ";
    cin.getline(sentences , 60);
    cout << sentences << endl;

    string word;
    cout << "enter any word: ";
    cin >> word;
    cout << word << endl;

    string sentence;
    cout << "enter a sentence with spaces: ";
    getline(cin, sentence);
    cout << sentence << endl;

    return 0;
} 
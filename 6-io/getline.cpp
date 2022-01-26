#include<iostream>
#include<string>

using namespace std;

int main(){ 
    string mystring;
    cout << "What's your name? ";
    getline(cin,mystring);
    cout << "Hello, "<< mystring <<".\n";
    cout << "What's your favoriate team? ";
    getline(cin,mystring);
    cout << "I like "<< mystring <<  " too!\n";
    return 0;
}
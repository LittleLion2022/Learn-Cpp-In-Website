#include<iostream>

using namespace std;

int main(){ 
    char handle;
    cin >> handle;
    switch(handle){
        case '1':
        case '2':
        case '3':
        cout << "It's 1,2 or 3.";
        break;
        default:
        cout << "It's not 1,2 nor 3.";

    }
    return 0;
}
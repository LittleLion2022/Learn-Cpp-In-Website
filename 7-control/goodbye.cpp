#include<iostream>
#include<string>
using namespace std;

int main(){
    string say; 
    do{
        cout << "say:";
        getline(cin,say);
        cout << "\nYou said:" << say << endl;
    }while(say != "goodbye");
    return 0;
}

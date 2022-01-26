#include<iostream>
#include<string>
#include<sstream>

using namespace std;

int main(){ 
    string mystring;
    float price = 0.0;
    int quanity = 0;
    cout << "Enter price:";
    getline(cin,mystring);
    stringstream(mystring) >> price;
    cout << "Enter quanity:";
    getline(cin,mystring);
    stringstream(mystring) >> quanity;
    cout << "The total price is " << price*quanity; 
    return 0;
}
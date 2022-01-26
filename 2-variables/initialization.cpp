#include<iostream>

using namespace std;

int main(){ 
    int a = 5;//type identifier = initial_value;c-like initialization (because it is inherited from the C language)
    int b(3);//type identifier (initial_value);constructor initialization (introduced by the C++ language)
    int c{2};//type identifier {initial_value};uniform initialization (ntroduced by the revision of the C++ standard, in 2011)
    int result;

    a =  a + b;
    result = a - c;
    cout << result;
    return 0;

}
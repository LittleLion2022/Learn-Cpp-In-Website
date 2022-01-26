#include<iostream>
using namespace std;
int main()
{
    int firstvalue,secondvalue;
    int * mypointer;

    mypointer = &firstvalue;
    *mypointer = 20;
    mypointer = &secondvalue;
    *mypointer = 50;
    cout << "first value is " << firstvalue << endl;
    cout << "second value is " << secondvalue << endl;


    return 0;
}
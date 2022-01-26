#include<iostream>
using namespace std;
long factorial(long i)
{
    if (i>1)
    {
        return i*factorial(i-1);
    }
    else
        return 1;
}
int main()
{
    long number = 9;
    factorial(9);
    cout << number << "! = " << factorial (number);
    return 0;
}
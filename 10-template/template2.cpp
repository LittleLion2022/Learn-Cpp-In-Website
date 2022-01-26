#include<iostream>
using namespace std;

template <class T,class U>
bool is_equal(T a,U b)
{
    return (a==b);
}

int main()
{
    int aa = 5;
    double bb = 5.0;
    if (is_equal(aa,bb))
        cout << "x and y are equal" << "\n";
    else
        cout << "x and y are not equal" << "\n";
    return 0;
}
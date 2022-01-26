#include<iostream>
using namespace std;

template <class T ,int N>
T mul(T a)
{
    return a*N;
}
int main()
{
    cout << mul<double,2>(23.4) << "\n";
    cout << mul<int,3>(4) << "\n";
    return 0;
}
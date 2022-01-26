#include<iostream>
using namespace std;
int sum(int a,int b)
{
    return a+b;
}
double sum(double a,double b)
{
    return a+b;
}
int main()
{
    cout << sum(1,2) << "\n";
    cout << sum(1.0,3.0)<< "\n";
    return 0;
}
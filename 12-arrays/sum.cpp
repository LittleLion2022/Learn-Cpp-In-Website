#include<iostream>
using namespace std;

int foo [] = {1,0,11034,336,52,3};
int i,result;

int main()
{
    for(i=0;i<6;i++)
    {
        result += foo[i];
    }
    cout << result;
    return 0;
}
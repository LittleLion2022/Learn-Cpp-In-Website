#include<iostream>
#include<array>
using namespace std;

int main()
{
    array<int,3> myarray = {9,99,999};
    int i;
    for(i=0;i<myarray.size();i++)
    {
        myarray[i] += 1;
    }
    for(int item:myarray)
    {
        cout << item << " ";
    }
    return 0;
}
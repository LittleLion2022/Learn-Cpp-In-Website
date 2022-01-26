#include<iostream>
using namespace std;
void odd(int);
void even(int);

int main()
{
    int i;
    do{
        cout << "Please input a number(press 0 to exit):";
        cin >> i;
        odd(i);

    }while(i!=0);
    return 0;
}

void odd(int a)//ÆæÊý
{
    if (a%2 == 1)
        cout << "This is a odd!\n";
    else 
        even(a);
}

void even(int a)//Å¼Êý
{
    if (a%2 == 0)
        cout << "This is a even!\n";
    else
        odd(a);
}
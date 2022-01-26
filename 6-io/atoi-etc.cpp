#include<iostream>
using namespace std;
int main()
{ 
    int quanity = 0;
    float price = 0;
    char mybuffer[100];
    cin.getline(mybuffer,100);
    quanity = atoi(mybuffer);
    cin.getline(mybuffer,100);
    price = atof(mybuffer);
    cout << "The total price is " << price*quanity << endl;
    return 0;
}
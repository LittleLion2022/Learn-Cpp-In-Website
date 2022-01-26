#include<iostream>
using namespace std;

void printarray(int array[],int length)
{
    for(int i=0;i<length;i++)
    {
        cout << array[i] << " ";
    }
    cout << "\n";
}

int main()
{
    int arr1[] = {1,2,3,4,5,6,7};
    int arr2[] = {1,2,3,4,5,6,7,8,9,10,11};
    printarray(arr1,7);
    printarray(arr2,11);
    return 0;
}
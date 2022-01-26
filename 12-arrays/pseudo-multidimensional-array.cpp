#include<iostream>
#define WIDTH 5
#define HEIGHT 3
using namespace std;


int main()
{
    int array[WIDTH*HEIGHT]={};
    int m,n,sum=0;
    for(n=0;n<HEIGHT;n++)
    {
        for(m=0;m<WIDTH;m++)
        {
            array[n*WIDTH+m] += (m+1)*(n+1);
        }

    }
    for(int i=0;i<WIDTH*HEIGHT;i++)
    {
        cout << array[i] << " ";
    }
    
    return 0;
}
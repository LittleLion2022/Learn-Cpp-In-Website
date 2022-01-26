#include<iostream>

using namespace std;

int main(){ 
    int n=10;
    label:
    cout << n << ",";
    n--;
    if(n>0){
        goto label;
    } 
    cout << "liftoff!\n";
    
    return 0;
}

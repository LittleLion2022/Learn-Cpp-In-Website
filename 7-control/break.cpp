#include<iostream>

using namespace std;

int main(){ 
    int n = 10;
    for(;n>0;--n){ 
        cout << n << ",";
        if (n == 3){
            cout << "countdown aborted!";
            break;
        }
    }
    return 0;
}

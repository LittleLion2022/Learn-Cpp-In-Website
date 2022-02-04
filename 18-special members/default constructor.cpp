#include<iostream>
#include<sstream>
using namespace std;
class Example
{
    string data;
  public:
    Example(){};
    Example(const string& str):data(str){};
    const string& content() const{return data;}
};
int main()
{ 
    Example foo;
    Example bar("Example");
    cout << "bar's content:" << bar.content() <<endl;
    return 0;
}
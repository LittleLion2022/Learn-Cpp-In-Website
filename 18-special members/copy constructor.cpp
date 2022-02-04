#include<iostream>
#include<string>
using namespace std;
class Example
{
    string* ptr;
  public:
    Example(const string& str):ptr(new string(str)){}
    ~Example(){delete ptr;}
    Example(const Example& x):ptr(new string(x.content())){}
    const string& content() const{return *ptr;}
};

int main()
{   
    Example foo("Example");
    Example bar = foo;
    cout << "bar's content:" << bar.content() << endl;
    return 0;
}
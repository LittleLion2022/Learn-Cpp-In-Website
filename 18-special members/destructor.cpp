#include<iostream>
using namespace std;
class Example{
    string* ptr;
  public:
    Example():ptr(new string){}
    Example(const string str):ptr(new string(str)){}
    ~Example(){delete ptr;}//对象的析构函数在其生命周期结束时被调用
    const string& content() const{return *ptr;}
};
int main()
{
    Example foo;
    Example bar("Example");
    cout << "bar's content: "<< bar.content() <<endl;
    return 0;
}

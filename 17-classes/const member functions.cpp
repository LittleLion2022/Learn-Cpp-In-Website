#include<iostream>
using namespace std;
class MyClass
{
  public:
    int x;
    MyClass(int val):x(val){}
    int get(){return x;}
};
int main()
{
    const MyClass foo(10);
    cout << foo.x << '\n';
    return 0;
}
// 当类的对象被限定为常量对象时：
// 从类外部对其数据成员的访问被限制为只读，
// 就好像它的所有数据成员对于从类外部访问它们的人来说都是常量一样。
// 但是请注意，构造函数仍然被调用，并且可以初始化和修改这些数据成员。
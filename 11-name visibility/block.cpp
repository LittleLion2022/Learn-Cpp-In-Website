#include<iostream>
using namespace std;

int main()
{
    int x = 20;
    int y = 10;
    {
        int x = 50;
        y = 50;
        cout << "inner block:" <<endl;
        cout << x << "\n" << y << "\n";
    }
    cout << "outer block:" <<endl;
    cout << x << "\n" << y << "\n";    
    return 0;
}
// 请注意，y 并未隐藏在内部块中，因此访问 y 仍会访问外部变量。
// 在引入块的声明中声明的变量，例如函数参数和在循环和条件中声明的变量（例如在 for 或 if 上声明的变量）,
// 对于它们引入的块来说是局部的。
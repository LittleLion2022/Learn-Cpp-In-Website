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
// ��ע�⣬y ��δ�������ڲ����У���˷��� y �Ի�����ⲿ������
// �������������������ı��������纯����������ѭ���������������ı����������� for �� if �������ı�����,
// ������������Ŀ���˵�Ǿֲ��ġ�
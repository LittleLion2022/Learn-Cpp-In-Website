#include<iostream>
using namespace std;
class CVector
{
  public:
    int x,y;
    CVector(){}
    CVector(int a,int b):x(a),y(b){}
};

CVector operator + (const CVector& al,const CVector& bl)
{
    CVector temp;
    temp.x = al.x + bl.x;
    temp.y = al.y + bl.y;
    return temp;
}

int main()
{
    CVector foo(3,1);
    CVector bar(1,2);
    CVector result;
    result = operator+(foo,bar);
    cout << result.x << "," << result.y << endl;
    return 0;
}
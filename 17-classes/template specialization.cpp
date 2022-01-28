#include<iostream>
using namespace std;
template <class T>
class mycontainer
{
    T element;
  public:
    mycontainer(T n){element = n;};
    T increase(){return ++element;}
};
template<>
class mycontainer<char>
{
    char element;
  public:
    mycontainer(char n){element = n;}
    char uppercase()
    {
        if((element>='a')&&(element<='z'))
            element += 'A'-'a';
        return element;
    }
};

int main()
{
    mycontainer<int> myint(7);
    mycontainer<char> mychar('j');
    cout << myint.increase() << endl;
    cout << mychar.uppercase() << endl;
    return 0;
}
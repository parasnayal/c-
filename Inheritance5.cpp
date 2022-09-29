// Multiple Inheritance => A derived class with more than one base class.

// Syntax for inheriting in multiple inheritance

// class {{Derived}} : {{visibility - mode}} {{base1}}, {{visibility - mode}} {{base2}}
// {
//     body of Dervied class
// };

#include <iostream>
using namespace std;

class Base1
{
protected:
    int data1;

public:
    void setData1(int a)
    {
        data1 = a;
    }
};
class Base2
{
protected:
    int data2;

public:
    void setData2(int a)
    {
        data2 = a;
    }
};

class Derived : public Base1, public Base2
{
public:
    void showData()
    {
        cout << "The value of data1 is => " << data1 << endl;
        cout << "The value of data2 is => " << data2 << endl;
        cout << "The value of sum of data1 and data2 is => " << data1 + data2 << endl;
    }
};

int main()
{
    Derived paras;
    paras.setData1(20);
    paras.setData2(20);
    paras.showData();
    return 0;
}
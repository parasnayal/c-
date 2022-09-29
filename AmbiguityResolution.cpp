// In multiple inheritances, when one class is derived from two or more base classes then there may be a possibility that the base classes have functions with the same name, and the derived class may not have functions with that name as those of its base classes. If the derived class object needs to access one of the similarly named member functions of the base classes then it results in ambiguity because the compiler gets confused about which base’s class member function should be called.

// Syntax for solving the ambiguity
// ObjectName.ClassName::FunctionName();

#include <iostream>
using namespace std;

class Base1
{
protected:
    int a;

public:
    void greet()
    {
        cout << "Hello World" << endl;
    }
};

class Base2
{
protected:
    int b;

public:
    void greet()
    {
        cout << "Hello! paras How are you ? " << endl;
    }
};

class Derived : public Base1, public Base2
{
protected:
    int c;
// Function overRiding or method overriding
    // public:
    //     void greet()
    //     {
    //         cout << "Hey ! this is not ambiguity" << endl;
    //     }

    // 1st way to resolve the ambiguity

    // public :
    // void greet() {
    //     Base1 ::greet();
    // }
};

int main()
{
    Base1 obj1;
    obj1.greet();
    Base2 obj2;
    obj2.greet();
    Derived obj3;
    // obj3.greet();
    obj3.Base2 ::greet();
    return 0;
}
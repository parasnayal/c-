// Sometimes implementation of all function cannot be provided in a base class because we don’t know the implementation. Such a class is called abstract class
// A pure virtual function (or abstract function) in C++ is a virtual function for which we can have implementation, But we must override that function in the derived class, otherwise the derived class will also become abstract class

// Example
// Abstract classes in c++
/*class Test {
    private:
    int data;
    public :
    // pure virtual function
    virtual void display () = 0;
}*/

// A pure virtual function is implemented by classes which are derived from a Abstract class.

// #include <iostream>
// using namespace std;

// class Base
// {
// public:
//     int data;
//     virtual void display() = 0;
//     int getx()
//     {
//         return data;
//     }
// };

// class Derived : public Base
// {
// public:
//     int a;
//     int geta()
//     {
//         return a;
//     }
//     void display()
//     {
//         cout << "The value of a is => " << a << endl;
//         // cout << "The value of x is => " << x << endl;
//     }
// };

// int main(void)
// {
//     // Base obj1;
//     // obj1.data = 10;
//     Derived obj2;
//     obj2.a = 40;
//     obj2.display();
//     return 0;
// }

// A class is abstract if it has at least one pure virtual function.
//  If we do not override the pure virtual function in derived class, then derived class also becomes abstract class.
// An abstract class can have constructors.

#include <iostream>
using namespace std;

class Base
{
public:
    int data;
    Base(int a)
    {
        data = a;
    }
    virtual void display() = 0;
    int getx()
    {
        return data;
    }
};

class Derived : public Base
{
public:
    int a;
    int geta()
    {
        return a;
    }
    Derived(int x, int y) : Base(x)
    {
        a = y;
    }
    void display()
    {
        cout << "The value of a is => " << a << endl;
        cout << "The value of x is => " << data<< endl;
    }
};

int main(void)
{
    // Base obj1;
    // obj1.data = 10;
    Derived obj2(10, 20);
    // obj2.a = 40;
    obj2.display();
    return 0;
}
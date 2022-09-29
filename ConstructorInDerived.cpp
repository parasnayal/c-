// Whenever we create a object of the class , the default constructor of the class is invoked the automatically to initialize the members of the class.

// If we inherit the class from the base class , then default constructors of the base classes is invoked autmatically first then constrcutor of the derived class is invoked automatically.

// Why the base class’s constructor is called on creating an object of derived class?
// The data members and member functions of base class comes automatically in derived class based on the access specifier but the definition of these members exists in base class only. So when we create an object of derived class, all of the members of derived class must be initialized but the inherited members in derived class can only be initialized by the base class’s constructor as the definition of these members exists in base class only. This is why the constructor of base class is called first to initialize all the inherited members.

// Order of constructor in single inheritance
// #include<iostream>
// using namespace std;

// class Parent {
//     public :
//     Parent () {
//         cout<<"This is base class constructor "<<endl;
//     }
// };
// class Child : public Parent {
//     public :
//     Child () {
//         cout<<"This is derived class constructor "<<endl;
//     }
// };

// int main () {
//     Child obj1;
//     return 0;
// }

// // Order of constructor in Multiple Inheritance
// #include <iostream>
// using namespace std;

// class A
// {
// public:
//     A()
//     {
//         cout << "This is baseClass A's constructor " << endl;
//     }
// };
// class B
// {
// public:
//     B()
//     {
//         cout << "This is baseClass B's constructor " << endl;
//     }
// };

// class C : public B,
//           public A
// {
// public:
//     C()
//     {
//         cout << "This is derived class c's constructor " << endl;
//     }
// };

// int main()
// {
//     C obj1;
//     return 0;
// }

// ********************** order of parametrized constructor call in single inheritance ***************************

// #include <iostream>
// using namespace std;
// class Base
// {
// protected:
//     int a;

// public:
//     Base()
//     {

//         cout << "Base class parametrized constructor" << endl;
//     }
// };

// class Derived : public Base
// {
// protected:
//     int b;

// public:
//     Derived(int x, int y)
//     {
//         a = x;
//         b = y;
//         cout << "Dervied class parameterized constructor" << endl;
//     }
//     void show_Data(void)
//     {
//         cout << "The value of a is => " << a << endl;
//         cout << "The value of b is => " << b << endl;
//     }
// };

// int main()
// {
//     Derived obj1(10, 20);
//     obj1.show_Data();
//     return 0;
// }

// **************** Another way ******************
// #include <iostream>
// using namespace std;
// class Base
// {
// protected:
//     int a;

// public:
//     Base(int x)
//     {
//         a = x;
//         cout << "Base class parametrized constructor" << endl;
//     }
// };

// class Derived : public Base
// {
// protected:
//     int b;

// public:
//     Derived(int x, int y) : Base(x)
//     {

//         b = y;
//         cout << "Dervied class parameterized constructor" << endl;
//     }
//     void show_Data(void)
//     {
//         cout << "The value of a is => " << a << endl;
//         cout << "The value of b is => " << b << endl;
//     }
// };

// int main()
// {
//     Derived obj1(10, 20);
//     obj1.show_Data();
//     return 0;
// }

// *************** mutliple inheritance**********
#include <iostream>
using namespace std;

class BaseClass1
{
protected:
    int data1;

public:
    BaseClass1(int x)
    {
        data1 = x;
        cout << "BaseClass1 constructor" << endl;
    }
};

class BaseClass2
{
protected:
    int data2;

public:
    BaseClass2(int y)
    {
        data2 = y;
        cout << "BaseClass2 constructor" << endl;
    }
};

class DerivedClass : public BaseClass1, public BaseClass2
{
protected:
    int data3;

public:
    DerivedClass(int x, int y, int z) : BaseClass1(x), BaseClass2(y)
    {
        data3 = z;
        cout << "Derived class constructor" << endl;
    }
    void show_Data()
    {
        cout << "data1 => " << data1 << endl;
        cout << "data2 => " << data2 << endl;
        cout << "data3 => " << data3 << endl;
    }
};

int main()
{
    DerivedClass obj1(10, 20, 30);
    obj1.show_Data();
    return 0;
}

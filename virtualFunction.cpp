// A virtual function is a member function which is declared within a base class and is re-defined (overridden) by a derived class. When you refer to a derived class object using a pointer or a reference to the base class, you can call a virtual function for that object and execute the derived class’s version of the function.

// Virtual functions ensure that the correct function is called for an object, regardless of the type of reference (or pointer) used for function call.
// They are mainly used to achieve Runtime polymorphism
// Functions are declared with a virtual keyword in base class.
// The resolving of function call is done at runtime.

// ************ Program to understand the virtual functions *****************
// #include <iostream>
// using namespace std;

// class Base
// {
// public:
//     int var_Base;
//     virtual void display()
//     {
//         cout << "This is base class display in which var_Base is => " << var_Base << endl;
//     };
//     void show()
//     {
//         cout << " base class show function " << endl;
//     };
// };
// class Derived : public Base
// {
// public:
//     int var_Derived = 10;
//     void display()
//     {
//         cout << "This is derived class display in which var_Derived is => " << var_Derived << endl;
//     };
//     void show()
//     {
//         cout << " derived class show function " << endl;
//     };
// };

// int main(void)
// {
//     Base *bptr;
//     Base obj1_Base;
//     Derived obj2_derived;
//     bptr = &obj2_derived;
//     bptr->var_Base = 40;
//     // virtaul function , binded at run time
//     bptr->display();
//     // Non-virtual function, binded at compile time
//     bptr->show();
//     return 0;
// }


// Runtime polymorphism is achieved only through a pointer (or reference) of base class type. Also, a base class pointer can point to the objects of base class as well as to the objects of derived class.

// Late binding (Runtime) is done in accordance with the content of pointer (i.e. location pointed to by pointer) and Early binding (Compile time) is done according to the type of pointer, since display() function is declared with virtual keyword so it will be bound at runtime (output is print derived class as pointer is pointing to object of derived class) and show() is non-virtual so it will be bound during compile time (output is show base class as pointer is of base type).

// NOTE: If we have created a virtual function in the base class and it is being overridden in the derived class then we don’t need virtual keyword in the derived class, functions are automatically considered as virtual functions in the derived class.


// It is a table that contains the memory addresses of all virtual functions of a class in the order in which they are declared in a class. This table is used to resolve function calls in dynamic/late binding manner. Every class that has virtual function will get its own Vtable.

// After creating Vtable address of that table gets stored inside a pointer i.e. VPTR (Virtual Pointer). When you create an object of a class which contains virtual function then a hidden pointer gets created automatically in that object by the compiler. That pointer points to a virtual table of that particular class.


#include<iostream>
using namespace std;
  
class base {
public:
    void fun_1() { cout << "base-1\n"; }
    virtual void fun_2() { cout << "base-2\n"; }
    virtual void fun_3() { cout << "base-3\n"; }
    virtual void fun_4() { cout << "base-4\n"; }
};
  
class derived : public base {
public:
    void fun_1() { cout << "derived-1\n"; }
    void fun_2() { cout << "derived-2\n"; }
    void fun_4(int x) { cout << "derived-4\n"; }
};
  
int main()
{
    base *p;
    derived obj1;
    p = &obj1;
  
    // Early binding because fun1() is non-virtual
    // in base
    p->fun_1();
  
    // Late binding (RTP)
    p->fun_2();
  
    // Late binding (RTP)
    p->fun_3();
  
    // Late binding (RTP)
    p->fun_4();
  
    // Early binding but this function call is
    // illegal (produces error) because pointer
    // is of base type and function is of
    // derived class
    // p->fun_4(5);
    
    return 0;
}
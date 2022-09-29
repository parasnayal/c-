// The word “polymorphism” means having many forms. In simple words, we can define polymorphism as the ability of a message to be displayed in more than one form
// Polymorphism have two types.
// (1) => compile time polymorphism
// Example => function overloading and operator overloading
// (2) => run time plolymorphism =>  Run time polymorphism is achieved when the object's method is invoked at the run time instead of compile time. It is achieved by method overriding which is also known as dynamic binding or late binding
// Example => function overriding

// ********** Pointer to derived class in c++ ***************
// (1) => It is true that a pointer of one class can point to other class, but classes must be a base and derived class, then it is possible.
// (2) => To access the variable of the base class, base class pointer will be used.
// (3) => a pointer is type of base class, and it can access all, public function and variables of base class since pointer is of base class, this is known as binding pointer.

#include <iostream>
using namespace std;
class Baseclass
{
public:
    int var_Base;
    void display()
    {
        cout << "This is base class pointer in which var_Base value is => " << var_Base << endl;
    }
};
class DerivedClass : public Baseclass
{
public:
    int var_derived;
    void display()
    {
        cout << "This is derived class pointer in which var_derived value is => " << var_derived << endl;
        cout << "This is derived class pointer in which var_base value is => " << var_Base << endl;
    }
};
int main(void)
{
    // **** Base class pointer *****
    Baseclass *base_class_pointer;
    Baseclass obj1_base_class;
    DerivedClass obj1_derived_class;
    base_class_pointer = &obj1_derived_class;
    base_class_pointer->var_Base = 100;
    // base_class_pointer->display();

    base_class_pointer->var_Base = 3400;
    // base_class_pointer->display();

    // ***** derived class pointer *****
    DerivedClass *derived_class_pointer;
    derived_class_pointer = &obj1_derived_class;
    derived_class_pointer->var_Base = 200;
    derived_class_pointer->var_derived = 300;
    derived_class_pointer->display();
    base_class_pointer->display();
    return 0;
}
// Whenever const keyword is attached with any method(), variable, pointer variable, and with the object of a class it prevents that specific object/method()/variable to modify its data items value.

// Rules => (1) => The const variable cannot be left un-initialized at the time of the assignment.
// (2) => It cannot be assigned value anywhere in the program.
// (3) => Explicit value needed to be provided to the constant variable at the time of declaration of the constant variable

// #include<iostream>
// using namespace std;
// int main () {

//     // const int x;  gives you compile time error
//     // x = 20;
//     const int x = 10;
//     cout<<"x => "<<x<<endl;
//     return 0;
// }

// ******************Const Keyword With Pointer Variables:*******************
//  there are three possible ways to use a const keyword with a pointer, which are as follows

// (1) => When the pointer variable point to a const value

// #include <iostream>
// using namespace std;
// int main(void)
// {
//     int x{10};
//     char y{'M'};
//     cout << "x => " << x << endl;
//     cout << "y => " << y << endl;

//     const int *iptr = &x;
//     const char *cptr = &y;
//     x = 20;
//     y = 'A';
//     cout << "x => " << x << endl;
//     cout << "y => " << y << endl;

//     cout << "*iptr => " << *iptr << endl;
//     cout << "*cptr => " << *cptr << endl;
//     return 0;
// }

// (2) => When the const pointer variable point to the value

// (3) => When const pointer pointing to a const variable:
// const int* const i = &x;

// Pass const-argument value to a non-const parameter of a function cause error

// ************* constants methods *****************
// Like member functions and member function arguments, the objects of a class can also be declared as const. An object declared as const cannot be modified and hence, can invoke only const member functions as these functions ensure not to modify the object.

// Syntax => const Class_Name Object_name;
// (1) => When a function is declared as const, it can be called on any type of object, const object as well as non-const objects.

// (2) => Whenever an object is declared as const, it needs to be initialized at the time of declaration. However, the object initialization while declaring is possible only with the help of constructors.

/*Ordinary const-function Declaration:

const void foo()
{
   //void foo() const Not valid
}
int main()
{
   foo(x);
}  */

/*A const member function of the class:

class
{
   void foo() const
   {
       //.....
   }
}*/

#include <iostream>
using namespace std;

class Test
{
private:
    int value;

public:
    Test(int x = 0)
    {
        value = x;
    }
    int getValue(void) const
    {
        return value;
    }
    void changeValue(int y)
    {
        value = y;
    }
};

int main(void)
{
    Test obj1(20);

    cout << " data member => " << obj1.getValue() << endl;

    const Test obj2(30);
    obj2.getValue();
    return 0;
}

// Constant Function Parameters And Return Type:
// A function() parameters and return type of function() can be declared as constant. Constant values cannot be changed as any such attempt will generate a compile-time error

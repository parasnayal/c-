// Destructor is an instance member function which is invoked automatically whenever an object is going to be destroyed. Meaning, a destructor is the last function that is going to be called before an object is destroyed.
// Destructor destroys the class objects created by constructor.
// Destructor has the same name as their class name preceded by a tilde (~) symbol
// It is not possible to define more than one destructor
// The destructor is only one way to destroy the object create by constructor. Hence destructor can-not be overloaded.
// Destructor neither requires any argument nor returns any value.
// It is automatically called when object goes out of scope
// Destructor release memory space occupied by the objects created by constructor.
// In destructor, objects are destroyed in the reverse of an object creation.

// The thing is to be noted here, if the object is created by using new or the constructor uses new to allocate memory which resides in the heap memory or the free store, the destructor should use delete to free the memory.
// The programmer cannot access the address of destructor

// A destructor function is called automatically when the object goes out of scope:
// (1) the function ends
// (2) the program ends
// (3) a block containing local variables ends
// (4) a delete operator is called

#include <iostream>
using namespace std;
int count = 0;
class num
{
public:
    num()
    {
        count++;
        cout << "First the constructor is called " << count << endl;
    }

    ~num()
    {
        count--;
        cout << "The destructor is called " << count << endl;
    }
};
int main()
{
    cout << "Inside the main function " << endl;
    cout << "Creating first object " << endl;
    num obj1;
    {
        cout << "Enter in block" << endl;
        num num2, num3;
        cout << "Existing from the block" << endl;
    }
    cout << "Outside from the main function " << endl;
    return 0;
}
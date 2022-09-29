// this pointer in c++
// (1) => Each object gets it's own copy of data members.
// (2) => All-access the same function definition as present in the code segment
// Meaning each object gets its own copy of data members and all objects share a single copy of member functions.

// The ‘this’ pointer is passed as a hidden argument to all nonstatic member function calls and is available as a local variable within the body of all nonstatic functions. ‘this’ pointer is not available in static member functions as static member functions can be called without any object (with class name).

// this pointer in C++ stores the address of the class instance, which is called from the member function that enables functions to access the correct object data members. We don't need to define the this pointer in C++ as a function argument in the class, and the compiler implicitly does it for us. this pointer can be accessed from every class function, including the constructor. Deleting the this pointer can lead to the program crashing and is generally not recommended.
// int& foo(); // Function will return an int by reference.

// 1st use => When local variable’s name is same as member’s name
// #include <iostream>
// using namespace std;
// class Base
// {
// private:
//     int x, y;

// public:
//     void setData(int x, int y)
//     {
//         this->x = x;
//         this->y = y;
//     }
//     void getData()
//     {
//         cout << "The value of x is => " << x << endl;
//         cout << "The value of y is => " << y << endl;
//     }
// };

// int main(void)
// {
//     Base obj1;
//     obj1.setData(10, 20);
//     obj1.getData();
//     return 0;
// }


// (2) => To return reference to the calling object
#include <iostream>
using namespace std;

class Test
{
private:
    int x, y;

public:
    void setData(int x, int y)
    {
        this->x = x;
        this->y = y;
    }
    Test &setx(int a)
    {
        x = a;
        return *this;
    }
    Test &sety(int b)
    {
        y = b;
        return *this;
    }
    void print() { cout << "x = " << x << " y = " << y << endl; }
};

int main(void)
{
    Test obj1;
    obj1.setData(10, 20);
    obj1.setx(20).sety(30);
    obj1.print();
    return 0;
}

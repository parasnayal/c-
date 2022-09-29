// Types of constructor
// (1) => Default constructor
// (2) => parametrized constructor
// (3) => copy constructor

// (1) => Default constructor is the constructor which does not accepts any arguments.It is known as zero argument constructor.

// #include <iostream>
// using namespace std;

// class constructor
// {

// private:
//     int a, b;

// public:
//     constructor() // default contructor
//     {
//         a = 10;
//         b = 20;
//     }
//     void printNumber()
//     {
//         cout << "The value of a is => " << a << endl;
//         cout << "The value of b is => " << b << endl;
//     }
// };

// int main()
// {
//     constructor obj1;
//     obj1.printNumber();
//     return 0;
// }

// (2) => parameterized constructor => It is possible to pass arguments to constructors. these arguments help initialize an object when it is created.

#include <iostream>
using namespace std;
class Point
{
private:
    int x, y;

public:
    Point(int x1, int y1)
    {
        x = x1;
        y = y1;
    }
    void displayNumber(void)
    {
        cout << "The value of x is => " << x << endl;
        cout << "The value of y is => " << y << endl;
    }
};
int main()
{
    Point p1(10, 20); // Implicit call
    Point p2 = Point(30, 40);
    p1.displayNumber();
    p2.displayNumber();
    return 0;
}
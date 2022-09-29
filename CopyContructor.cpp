// Copy constructor itself makes two types of constructor if no constrcutor is specified by the programmer
// (1) => default constructor
// (2) => copy constructor => A copy constructor is a member function that initializes an object using another object of the same class.
// Syntax => ClassName(const className &obj);
//  Copy constructor is used to initialize the members of a newly created object by copying the members of an already existing object.

// copy constructor is called in the following case
// When an object of the class is returned by value. 
// When an object of the class is passed (to a function) by value as an argument. 
// When an object is constructed based on another object of the same class. 
// When the compiler generates a temporary object.


// program to understand the copy constructor or explicit copy constructor 
// #include <iostream>
// using namespace std;

// class Point
// {
// private:
//     int x, y;

// public:
//     Point(int a, int b)
//     {
//         x = a;
//         y = b;
//         cout << "parameterized constructor is called here! " << endl;
//     }

//     Point(const Point &obj)
//     {
//         x = obj.x;
//         y = obj.y;
//         cout << "Copy constructor is called here!" << endl;
//     }

//     void display (void){
//         cout<<"x => "<<x<<endl;
//         cout<<"y => "<<y<<endl;
//     }
// };

// int main(void)
// {
//     Point p1(10,20);
//     Point p2 (p1);
//     p1.display();
//     p2.display();
//     return 0;
// }


// implicit copy constrcutor is called here
#include <iostream>
using namespace std;

class Point
{
private:
    int x, y;

public:
    Point(int a, int b)
    {
        x = a;
        y = b;
        cout << "parameterized constructor is called here! " << endl;
    }

    void display (void){
        cout<<"x => "<<x<<endl;
        cout<<"y => "<<y<<endl;
    }
};

int main(void)
{
    Point p1(10,20);
    Point p2 (p1);
    p1.display();
    p2.display();
    return 0;
}
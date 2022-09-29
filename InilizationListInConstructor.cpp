// Initialization list is used for the initialize the data members of the class
// #include <iostream>
// using namespace std;

// class Base
// {
// private:
//     int data1, data2;

// public:
//     Base(int x, int y) : data1(x), data2(y)
//     {
//         cout << "The base class constructor is called " << endl;
//     }
//     void getData()
//     {
//         cout << "The value of data1 is => " << data1 << endl;
//         cout << "The value of data2 is => " << data2 << endl;
//     }
// };

// int main()
// {
//     Base obj1(10,20);
//     obj1.getData();
//     return 0;
// }

// 1st use of initialization list => For initialization of non-static const data members

// #include <iostream>
// using namespace std;

// class Base
// {
// private:
//     const int a, b;

// public:
//     Base(int x, int y) : a(x), b(y)
//     {
//         cout << "The constructor is called" << endl;
//     }
//     void getData()
//     {
//         cout << "The value of a is => " << a << endl;
//         cout << "The value of b is => " << b << endl;
//     }
// };

// int main(void)
// {
//     Base obj1(10,20);
//     obj1.getData();
//     return 0;
// }

//  2nd use of initialization list => For initialize the reference variable

#include <iostream>
using namespace std;

class Base
{
private:
    int &a, &b;

public:
    Base(int &i, int &j) : a(i), b(j)
    {
        cout << "The base class constructor is called" << endl;
    }
    void getData()
    {
        cout << "a => " << a << endl;
        cout << "b => " << b << endl;
    }
};

int main()
{
    int x = 10, y = 20;
    Base obj1(x, y);
    obj1.getData();
    return 0;
}